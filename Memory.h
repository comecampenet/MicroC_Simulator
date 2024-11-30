#pragma once
#include <vector>
#include <cstdint>
#include <stdexcept>
#include "MemorySegment.h"

class Memory
{
private:
	std::vector<MemorySegment> segments;

public:
	Memory();

	uint32_t getSize() const;
	uint32_t read(uint32_t address);

	void addSegment(MemorySegment segment);
	void write(uint32_t address, uint8_t value);

	void reset();
};

