#include "main.h"

#define PI 3.142

// Area calculations of circle,rectangle,square and triangle
 long area_circle(long radius)
{
    double circle;
    circle = PI * radius * radius;
    return circle;
}
int area_rectangle(int breadth,int length)
{
    int rectangle;
    rectangle = breadth * length;
    return rectangle; 
}
int area_square(int length1)
{
    int square;
    square = length1 * length1;
    return square; 
}
int area_triangle(int base,int height)
{
    int triangle;
    triangle = 0.5 * base * height;
    return triangle; 
}

// Volume calculations of cube,cylinder,cone and sphere

double volume_cube(int radius1)
{ 
    double cube;
    cube = radius1 *radius1 *radius1;
    return cube;
}
int volume_cylinder(int radius,int height)
{
    double cylinder;
    cylinder = PI * radius *radius* height;
    return cylinder;
}
int volume_cone(int radius,int height)
{
    double cone;
    cone = 0.33* PI * radius *radius *height;
    return cone;
}
int volume_sphere(int radius)
{
    double sphere;
    sphere = 1.33 * PI * radius * radius * radius;
    return sphere;
}
