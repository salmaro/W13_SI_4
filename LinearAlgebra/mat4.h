#pragma once
#include <vector>
#include "vec4.h"

class mat4
{
	std::vector<vec4> MyArray;

public:
	mat4();
	mat4(vec4 input);
	void push_back(vec4 input);
	vec4 at(int position);
	std::vector<int> operator* (const vec4& vecIn);
};

