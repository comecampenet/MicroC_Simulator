#include "Register.h"

Register::Register(const std::string& _name, uint32_t _size, uint32_t _value)
	: name(_name), value(_value), size(_size)
{
}

std::string Register::getName() const
{
	return name;
}

uint32_t Register::getSize() const
{
	return size;
}

uint32_t Register::getValue() const 
{
	return value;
}

void Register::setValue(uint32_t _value)
{
	value = _value;
}
