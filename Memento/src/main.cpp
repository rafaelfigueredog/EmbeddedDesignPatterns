#include "SO.hpp"
#include <iostream>

int main()
{
  SO *so = new SO();
  so->showDate();

  so->setDate("29/11/2020");
  so->showDate();

  so->setDate("30/11/2020");
  so->showDate();
  so->backup();

  so->setDate("01/12/2020");
  so->showDate();

  so->setDate("02/12/2020");
  so->showDate();
  so->backup();

  so->setDate("03/12/2020");
  so->showDate();

  so->nBackups();
  
  so->restore(0);
  so->showDate();

  so->restore(1);
  so->showDate();

  delete so;
  
  return 0;
}