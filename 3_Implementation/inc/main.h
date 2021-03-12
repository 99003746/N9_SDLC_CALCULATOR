#ifndef _MAIN_H_
#define _MAIN_H_

#include<stdio.h>
#include<math.h>

#define PI 3.142


// area calculations
long area_circle(long radius);
int area_rectangle(int breadth,int length);
int area_square(int length);
int area_triangle(int base,int height);

// volume calculations
double volume_cube(int radius1);
int volume_cylinder(int radius,int height);
int volume_cone(int radius,int height);
int volume_sphere(int radius);

#endif 
