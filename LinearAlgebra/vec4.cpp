#include "pch.h"
#include "vec4.h"

vec4::vec4() : x{ 0 }, y{ 0 }, z{ 0 }, w{0}
{
}

vec4::vec4(int x_input, int y_input, int z_input, int w_input) :x{ x_input }, y{ y_input }, z{ z_input }, w{ w_input }
{
}

vec4 vec4::operator+(const vec4& vecIn)
{
    return vec4(this->x + vecIn.x, this->y + vecIn.y, this->z + vecIn.z, this->w + vecIn.w);
}

vec4 vec4::operator-(const vec4& vecIn)
{
    return vec4(this->x - vecIn.x, this->y - vecIn.y, this->z - vecIn.z, this->w - vecIn.w);
}

vec4 vec4::operator*(const vec4& vecIn)
{
    return vec4(this->x * vecIn.x, this->y * vecIn.y, this->z * vecIn.z, this->w * vecIn.w);
}

vec4 vec4::operator*(const int& factor2)
{
    return vec4(this->x * factor2, this->y * factor2, this->z * factor2, this->w * factor2);
}

bool vec4::operator==(const vec4& vec) const
{
    if (this->x == vec.x && this->y == vec.y && this->z == vec.z && this->w == vec.w)
        return true;
    else
        return false;
}

bool vec4::isEqual(const vec4& vec1, const vec4& vec2)
{
    return vec1==vec2;
}



