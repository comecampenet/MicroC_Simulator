#include "Flag.h"

Flag::Flag(std::string _name)
	:name(_name), value(false)
{
}

std::string Flag::getName()
{
	return name;
}

bool Flag::getValue()
{
	return value;
}

void Flag::setValue(bool _value)
{
	value = _value;
}
