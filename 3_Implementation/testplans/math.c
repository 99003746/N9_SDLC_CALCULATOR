//99003788_Suvradeep
//Binary to Decimal Conversion
#include "math.h"

int bintodec(long int a)
{
		int rem,dec= 0;
    long int b;
    int m,i=0;
    b=a;
    if(a<0)
    {
        printf("Invalid Input");
    }
    else
    {
        while(a!=0)
        {
            rem=a%10;
            a=a/10;
            if(rem>1 || rem<0)
                m=1;
        }
        if(m==1)
        {

            printf("Invalid Input");
        }
        else
            {
            while (b != 0)
            {
                rem = b % 10;
                b /= 10;
                dec += (rem * pow(2, i));
                i++;
            }
            printf("%d",dec);
            }
    }

}
//end of function

//99003784_Souvik
//for calculatinf power , logarithm and exponential function
#include "math.h"
#include<stdio.h>
#include<math.h>

double logarithm(double  x)
 {
     double a;
     a = log(x);
     printf(" %lf\n",a);
    
 }

double exponent_num(double m)
{
    double r;
    r = exp(m);
    printf("%lf\n", r);
    return r;
}
double power( double a,double b)
{
    double result_of_power_of_a_number;
    result_of_power_of_a_number = pow(a, b);
    printf("%.2lf",result_of_power_of_a_number);
    return ;
}

//end of functions
