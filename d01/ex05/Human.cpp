#include "Human.hpp"

const Brain   &Human::getBrain()
{
    return _myBrain;
}

std::string Human::identify( void ) const
{
    std::string str = _myBrain.identify();
    return str;
}