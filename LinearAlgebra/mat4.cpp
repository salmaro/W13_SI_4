#include "pch.h"
#include "mat4.h"

mat4::mat4()
{
}

mat4::mat4(vec4 input)
{
    MyArray.push_back(input);
}

void mat4::push_back(vec4 input)
{
    MyArray.push_back(input);
}

vec4 mat4::at(int position)
{
    return MyArray.at(position);
}

std::vector<int> mat4::operator*(const vec4& vecIn)
{
    std::vector<int> result;

    for (auto &e : MyArray) {
        e.x *= vecIn.x;
        e.y *= vecIn.y;
        e.z *= vecIn.z;
        e.w *= vecIn.w;
    }
    for (auto& e : MyArray) {
        result.push_back(e.x + e.y + e.z + e.w);
    }

    return result;
}
