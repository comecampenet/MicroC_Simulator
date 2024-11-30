#include "Memory.h"

Memory::Memory()
	:segments()
{
}

uint32_t Memory::getSize() const
{
    uint32_t totalSize = 0;
    for (MemorySegment segment : segments)
    {
        totalSize += segment.getSize();
    }
    return totalSize;
}

uint32_t Memory::read(uint32_t address)
{
    for (auto& segment : segments)
    {
        uint32_t start = segment.getStartAddress();
        uint32_t end = start + segment.getSize();

        if (address >= start && address < end)
        {
            return segment.read(address);
        }
    }

    throw std::out_of_range("Address out of bounds");
}

void Memory::addSegment(MemorySegment segment)
{

    segments.push_back(segment);
}

void Memory::write(uint32_t address, uint8_t value)
{
    for (auto& segment : segments)
    {
        uint32_t start = segment.getStartAddress();
        uint32_t end = start + segment.getSize();

        if (address >= start && address < end)
        {
            segment.write(address, value);
            return;
        }
    }

    throw std::out_of_range("Address out of bounds");
}

void Memory::reset()
{
    for (auto& segment : segments)
    {
        segment.reset();
    }
}
