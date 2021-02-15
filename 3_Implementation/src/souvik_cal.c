#include <stdio.h>
#include <math.h>
int main()
{
    double base_number, exponent, result_of_power_of_a_number,  x_argument_of_log , result_of_logarithm,  value, result; 
    int symbols;
    printf("For power_of_a_number press-1\nFor calculation_of_logarithm press-2\nfor result_of_exponential press 3\n");
    scanf("%d", &symbols);
    switch(symbols)
    {
        case 1:
        printf("Enter the base number: \n "); 
        scanf("%lf", &base_number);
        printf("Enter the exponent: \n "); 
        scanf("%lf", &exponent);

        result_of_power_of_a_number = pow(base_number, exponent);
        printf("%.2lf",result_of_power_of_a_number);
        return result_of_power_of_a_number;
        break;

         case 2:
          

         printf("Enter a number to find its logarithm \n"); 
         scanf("%lf", &x_argument_of_log);

          result_of_logarithm = log(x_argument_of_log);

          printf("%lf\n", result_of_logarithm);

          return result_of_logarithm;
          break;
          
          case 3:
           
    printf("Enter the value\n");
    printf("Enter the result\n");
    scanf("%lf", &value);
    scanf("%lf", &result);
    

    
    result = exp(value);

    
    printf( "%f\n", result);
    return result;
    break;
          
    }

      return 0;  
 }
