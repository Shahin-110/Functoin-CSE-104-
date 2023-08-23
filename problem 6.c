
#include <stdio.h>
float GetTriangleArea(float base, float height)
{
    return ((1 * base * height)/2);
}
int main()
{
    float base, height;
    printf("base = ");
    scanf("%f", &base);
    printf("height = ");
    scanf("%f", &height);
    float area = GetTriangleArea(base, height);
    printf("Area = %.0f\n", area);
    return 0;
}
