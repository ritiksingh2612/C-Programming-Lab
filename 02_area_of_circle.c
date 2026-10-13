
 // Topic: Calculate the Area of a Circle
#include <stdio.h>

int main()
{
    float radius, area;
    const float PI = 3.14159f;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area of circle = %.2f\n", area);

    return 0;
}