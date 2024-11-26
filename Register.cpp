#include "Register.h"

Register::Register(const std::string& _name, uint32_t _size, uint32_t _value)
	: name(_name), value(_value), size(_size)
{
}

std::string Register::getName()
{
	return name;
}

uint32_t Register::getSize()
{
	return size;
}

uint32_t Register::getValue()
{
	return value;
}

void Register::setValue(uint32_t _value)
{
	value = _value;
}
