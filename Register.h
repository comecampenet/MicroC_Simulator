#pragma once
#include <cstdint>
#include <string>

class Register
{
private:
	std::string name;
	uint32_t size;
	uint32_t value;

public:

	Register(const std::string& _name, uint32_t _size, uint32_t _value);

	std::string getName();
	uint32_t getSize();
	uint32_t getValue();

	void setValue(uint32_t _value);
};
