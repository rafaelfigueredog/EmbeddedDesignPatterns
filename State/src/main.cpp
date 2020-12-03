#include <iostream>
#include <typeinfo>

class Context;

class State {

 protected:
  Context *context;

 public:
  virtual ~State() {
  }

  void setContext(Context *context) {
    this->context = context;
  }

  virtual void Handle1() = 0;
  virtual void Handle2() = 0;
};


class Context {

 private:
  State *state;

 public:
  Context(State *state) : state(nullptr) {
    this->handleTo(state);
  }
  ~Context() {
    delete state;
  }

  void handleTo(State *state) {
    std::string str = (std::string) typeid(*state).name(); 
    std::cout << "Mudando para estado: " << str.substr(1,str.length()) << ".\n";
    if (this->state != nullptr)
      delete this->state;
    this->state = state;
    this->state->setContext(this);
  }

  void button1() {
    this->state->Handle1();
  }
  void button2() {
    this->state->Handle2();
  }
};


class StateA : public State {
 public:
  
  void Handle1() override {
    std::cout << "Led Azul Ligado\n";
  }
  void Handle2() override; 
};

class StateB : public State {
 public:
  void Handle1() override {
    std::cout << "Led Verde Ligado\n";
  }
  void Handle2() override {
    this->context->handleTo(new StateA);
  }
};


void StateA::Handle2() {
    this->context->handleTo(new StateB);
}


void Cliente() {
  Context *context = new Context(new StateA);
  context->button1();
  context->button2();
  context->button1(); 
  context->button2(); 
  delete context;
}

int main() {
  Cliente();
  return 0;
}