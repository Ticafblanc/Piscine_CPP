#pragma once
#include <string>

typedef struct
{
	std::string	str;
	char		c;
	int			i;
	float		f;
	double		d;
} Data;

Data* deserialize(uintptr_t raw);
uintptr_t serialize(Data* ptr);
