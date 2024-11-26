#include "Memory.h"

Memory::Memory(uint32_t _size)
	:size(_size), memory(_size, 0)
{
}

uint32_t Memory::getSize() const
{
	return size;
}

uint32_t Memory::read(uint32_t address)
{
	return memory.at(address);
}

void Memory::write(uint32_t address, uint8_t value)
{
	memory.at(address) = value;
}

void Memory::reset()
{
	std::fill(memory.begin(), memory.end(), 0);
}
