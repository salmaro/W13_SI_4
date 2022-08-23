#include "pch.h"
#include "../LinearAlgebra/vec4.h"
#include "../LinearAlgebra/mat4.h"



TEST(TestVec4, Vec4Addition) {

    vec4 vec1{ 1, 2, 3, 4 };
    vec4 vec2{ 1, 2, 3, 4 };
    vec4 vec3 = vec1 + vec2;
    vec4 result{2 ,4 ,6 ,8 };

   ASSERT_EQ(result,vec3);

}