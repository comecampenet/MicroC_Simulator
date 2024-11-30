#pragma once
#include <string>
#include <vector>
#include <cstdint>

class MemorySegment
{
private:
	std::string type;
	uint32_t startAdress;
	uint32_t size;
	std::vector<uint8_t> data;

public:
	MemorySegment();

	uint8_t read(uint32_t address);
	uint32_t getSize();
	uint32_t getStartAddress();

	void write(uint32_t address, uint8_t value);
	void reset();
};

