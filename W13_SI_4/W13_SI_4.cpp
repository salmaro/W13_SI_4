// W13_SI_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../LinearAlgebra/vec4.h"
#include "../LinearAlgebra/mat4.h"

int main()
{
    vec4 vec1{ 1, 2, 3, 4 };
    vec4 vec2{ 1, 2, 3, 4 };
    vec4 vec3, vec4;
    vec3 = vec1 + vec2;
    vec3 = vec3 * 2;
    vec4 = vec1 * vec2;

    mat4 mat1(vec1);
    mat1.push_back(vec1);
   std::vector<int> mat2;
    mat2 = mat1 * vec1;
    for (auto e : mat2) {
        std::cout << e << std::endl;
    }
}

