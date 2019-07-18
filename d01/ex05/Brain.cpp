#include "Brain.hpp"
#include <iostream>
#include <sstream>

std::string Brain::identify() const
{
    std::stringstream ss;

    ss << this;
    return ss.str();
}