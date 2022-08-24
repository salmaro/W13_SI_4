#pragma once
class vec4
{
public:
	int x, y, z, w;

	vec4();
	vec4(int x, int y, int z, int w);

	vec4 operator+ (const vec4& vecIn);
	vec4 operator- (const vec4& vecIn);
	//iloczyn skalarny
	vec4 operator* (const vec4& vecIn);
	vec4 operator* (const int& factor2);
	bool operator== (const  vec4& vec4) const; 
	bool isEqual(const vec4& vec1, const vec4& vec2);
};

