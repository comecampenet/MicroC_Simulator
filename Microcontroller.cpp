#include "Microcontroller.h"

uint8_t Microcontroller::readMemory(uint32_t address)
{
    return memory.read(address);
}

void Microcontroller::writeMemory(uint32_t address, uint8_t value)
{
    memory.write(address, value);
}

Register& Microcontroller::getRegister(std::string name)
{
    return registers.at(name);
}

Flag& Microcontroller::getFlag(std::string name)
{
    return flags.at(name);
}

void Microcontroller::reset()
{
    // Reset memory
    memory.reset();

    // Reset all registers
    for (auto& regPair : registers)
    {
        regPair.second.setValue(0); // Assuming Register has a reset() method
    }

    // Reset all flags
    for (auto& flagPair : flags)
    {
        flagPair.second.setValue(0); // Assuming Flag has a reset() method
    }
}
