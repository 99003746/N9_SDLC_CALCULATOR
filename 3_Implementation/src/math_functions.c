#include "special_math_functions.h"

#include<stdio.h>
#include<math.h>
//Logarithm function

double logarithmic(double input)
{
double logarithmic_value;

//calculating the logarithmic value
logarithmic_value = log(input);

//returning  the final result
return logarithmic_value;
}

// End of function


//Exponent function

double exponential(float input)
{
double exponential_value;

//calculating the exponential value
exponential_value = exp(input);

//returning  the final result
return exponential_value;
}

// End of function


//squareroot function

double squareroot(double input)
{
double sqrt_value;

//calculating the squareroot
sqrt_value = sqrt(input);

//returning  the final result
return sqrt_value;
}

// End of function


//Cuberoot function
double cuberoot(double input)
{
double cbrt_value;

//calculating the Cuberoot
cbrt_value = pow(input,1/3);

//returning  the final result
return cbrt_value;
}