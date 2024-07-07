#include<stdio.h>
#include<math.h>
float SquareArea(float side);
float CircleArea(float rad);
float RectangleArea(float a, float b);
 int main()
 {
    float a = 5.0;
    float b = 10.0;
    printf("area is : %f", RectangleArea);
    return 0;
 }
float SquareArea (float side)
{
    return side *side ;
}
float RectangleArea(float a,float b)
{
    return a*b;
} 