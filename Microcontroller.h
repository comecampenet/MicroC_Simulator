#pragma once
#include <string>
#include <vector>
#include <map>
#include <stdexcept>
#include "Memory.h"
#include "Register.h"
#include "Flag.h"
//#include "Peripheral.h"

class Microcontroller
{
private:
	std::string name;
	Memory memory;
	std::map<std::string, Register> registers;
	std::map<std::string, Flag> flags;
	//std::map<std::string, Peripheral> peripherals;

public:
	Microcontroller();

	uint8_t readMemory(uint32_t address);
	void writeMemory(uint32_t address, uint8_t value);

	Register& getRegister(std::string name);
	Flag& getFlag(std::string name);
	//Peripheral& getPeripheral(std::string name);

	void reset();
};

