#include<stdio.h>
#include<math.h>
#include"math.h"
int main()
{
     //for accepting a number to convert binary to decimal
     int n;
    printf("Enter a Number:- ");
    scanf(" %d",&n);
        bintodec(n);
     
     // for calculating power, exponent and logarithm
     double base_number, exponent, result_of_power_of_a_number,  x_argument_of_log , result_of_logarithm,  value, result;
    int symbols;

    printf("For power_of_a_number press-1\nFor calculation_of_logarithm press-2\nfor result_of_exponential press 3\n");
    printf("Enter your choice\n");
    scanf("%d", &symbols);

    switch(symbols)

    {

        case 1:

        printf("Enter the base number: \n ");

        scanf("%lf", &base_number);

        printf("Enter the exponent: \n ");

        scanf("%lf", &exponent);
        power(base_number, exponent);

       



        break;



         case 2:

         printf("Enter a number to find its logarithm \n");

         scanf("%lf", &x_argument_of_log);

          logarithm(x_argument_of_log);
          

          break;



         case 3:



    printf("Enter the value\n");
    scanf("%lf", &value);
   exponent_num(value);
    

    break;



    }
     
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

    return 0;
}




