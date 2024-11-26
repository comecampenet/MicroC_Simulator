#pragma once
#include <cstdint>
#include <string>

class Flag
{
private:
	std::string name;
	bool value;

public:
	Flag(std::string _name);

	std::string getName();
	bool getValue();

	void setValue(bool _value);
};

