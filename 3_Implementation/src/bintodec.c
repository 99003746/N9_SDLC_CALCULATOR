// Converting a binary number to decimal
// if the entered number is binary

#include "bintodec.h"

char bintodec(long int a)
{
//declaring variables
int rem,dec= 0;
    long int b;
    int m,i=0;
    b=a;

//checking whether the given number is positive or negative
    if(a<0)
    {
//when the entered number is negative
        return "Invalid Input" ;
    }

//if the number is positive
    else
    { //extracting digits from the entered nuber one by one

        while(a!=0)
        {
            rem=a%10;
            a=a/10;
            if(rem>1 || rem<0)
                m=1;
        }

        if(m==1)
        {
// if the digit is greater than 1
        return "Invalid Input";
        }
// if the number is binary
        else
            {
//converting the binary number to it's decimal equivalent
            while (b != 0)
            {
                rem = b % 10;
                b /= 10;
                dec += (rem * pow(2, i));
                i++;
            }
//printing the final decimal equivalent
            return dec ;
            }
    }

}
