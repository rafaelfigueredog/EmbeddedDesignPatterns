#include "Radio.hpp"
#include <iostream>

	void Radio::ListParts() const
	{
		std::cout << "Radio parts: ";
		for (size_t i = 0; i < parts_.size(); i++)
		{
			if (parts_[i] == parts_.back())
			{
				std::cout << parts_[i];
			}
			else
			{
				std::cout << parts_[i] << ", ";
			}
		}
		std::cout << "\n\n";
	}