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

//99003787_Pujitha
//for performing basic arithmetic operations
char Operator;
                float op1, op2, result = 0;
                
                // Selection of Basic Arithmetic Operations
                printf("enter '+' for addition\n");
                printf("\n enter '-' for substraction\n");
                printf("\n enter '*' for multiplication\n");
                printf("\n enter '/' for division\n");
                
                // Accepting Users choice of Operation
                printf("\n Please Enter your choice  :  \n");
                scanf("%c", &Operator);
                
                //Accepting First Number
                printf("\n Please enter first number  \n");
                scanf("%f", &op1);
               
                //Accepting Second number
                printf("\n Please enter second number  \n");
                scanf("%f", &op2);
                
                switch(Operator)
                {
                    // for Addition
                                case '+':
                                    addition(op1,op2);
                                               
                                    break;
                                                
                                // for Substraction          
                            
                                case '-':
                                    substraction(op1,op2);
                                    
                                    break; 
                                                
                                //for Multiplication          
                                case '*':
                                                multiplication(op1, op2);

                                                break;
                                                
                                //for Division
                                case '/':
                                                division(op1,op2);
                                            
                                                break;
                                                
                                // for Wrong Entry
                                default:
                                                printf("\n You have enetered an Invalid Operator ");                                                                                                        
                }
//end of functions
