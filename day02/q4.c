/*
name:vasu chaudhary
sap id:590040900
day:2 question:2
date:11-08-2026

Q4: Write a program to calculate the area and circumference of a circle given its radius.
*/

#include <stdio.h>

int main()
{
    float radius, area, circumference;

    scanf("%f", &radius);

    area = 3.14159 * radius * radius;
    circumference = 2 * 3.14159 * radius;

    printf("Area=%.2f, Circumference=%.2f", area, circumference);

    return 0;
}
