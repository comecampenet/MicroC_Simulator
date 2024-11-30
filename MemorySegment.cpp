#include "MemorySegment.h"

MemorySegment::MemorySegment()
	: type("Undefined"), startAdress(0), size(0), data(size, 0)
{
}

uint8_t MemorySegment::read(uint32_t address)
{
	return data.at(address);
}

void MemorySegment::write(uint32_t address, uint8_t value)
{
	data.at(address) = value;
}

uint32_t MemorySegment::getSize()
{
	return size;
}

uint32_t MemorySegment::getStartAddress()
{
	return startAdress;
}

void MemorySegment::reset()
{
	std::fill(data.begin(), data.end(), 0);
}
