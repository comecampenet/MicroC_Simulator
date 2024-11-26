#pragma once
#include <vector>
#include <cstdint>
#include <stdexcept>

class Memory
{
private:
	std::vector<uint8_t> memory;
	uint32_t size;

public:
	Memory(uint32_t _size);

	uint32_t getSize() const;
	uint32_t read(uint32_t address);

	void write(uint32_t address, uint8_t value);
	void reset();
};

