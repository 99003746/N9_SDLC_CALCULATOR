#include "basic_trig.h"
#include <stdio.h>
#include <math.h>
//Basic Airthmetic Operations
float add(float a,float b)
{
float c;
printf("Enter The Number 1\n");
scanf("%f",&a); 
printf("Enter The Number 2\n");
scanf("%f",&b);
c=a+b;
printf("Addition=%f\n",c);
return c;
}
float sub(float a,float b)
{
float c;
printf("Enter The Number 1\n");
scanf("%f",&a); 
printf("Enter The Number 2\n");
scanf("%f",&b);
c=a-b;
printf("Subtraction=%f\n",c);
return c;
}
float mult(float a,float b)
{
float c;
printf("Enter The Number 1\n");
scanf("%f",&a); 
printf("Enter The Number 2\n");
scanf("%f",&b);
c=a*b;
printf("Multiplication=%f\n",c);
return c;
}
float div(float a,float b)
{
float c;
printf("Enter The Number 1\n");
scanf("%f",&a); 
printf("Enter The Number 2\n");
scanf("%f",&b);
c=a/b;
  if (b==0)
         {
         printf("Calculator Cannot Print This Value");
         }
         else
         {
         printf("Division=%f\n",c);
         }
         
 return c;
}
//Trigonometric Operations
//ALL value in radian
float sine(float a)
{
  float b;
printf("Enter The Value Of Angle\n");
scanf("%f",&a);
b=sin(a);
printf("sin=%f\n",b);
return b;
}       
float cosine(float a)
{
  float b;
printf("Enter The Value Of Angle\n");
scanf("%f",&a);
b=cos(a);
printf("cosine=%f\n",b);
return b;
}       
float tanf(float a)
{
  float b;
printf("Enter The Value Of Angle\n");
scanf("%f",&a);
b=tan(a);
printf("tan=%f\n",b);
return b;
}   
float sininv(float a)
{
  float b;
printf("Enter The Value Of Angle\n");
scanf("%f",&a);
b=asin(a);
printf("sininverse=%f\n",b);
return b;
}   
float cosinv(float a)
{
  float b;
printf("Enter The Value Of Angle\n");
scanf("%f",&a);
b=acos(a);
printf("cosinverse=%f\n",b);
return b;
}   
float taninv(float a)
{
  float b;
printf("Enter The Value Of Angle\n");
scanf("%f",&a);
b=atan(a);
printf("taninverse=%f\n",b);
return b;
}   


int basic_trig()
{
    int symbols;
    printf("For Addition press-1\nFor Substraction press-2\nFor Multiplication press-3\nFor Divison press-4\nAll Trigonometric Answer Will Be In Radian\nFor Sin press-5\nFor Cos press-6\nFor Tan press-7\nFor Sin Inverse press-8\nFor Cos Inverse press-9\nFor Tan Inverse press-10\n");  
    scanf("%d",&symbols);
    float a,b,c;
     switch(symbols)
  { 
    case 1:
    c=add(a,b);
    break;
    case 2:
    c=sub(a,b);
    break;
    case 3:
    c=mult(a,b);
    break;
    case 4:
    c=div(a,b);
    break;
     b=sine(a);
    break;
    case 6:
    b=cosine(a);
    break;
    case 7:
    b=tanf(a);
    break;
    case 8:
    b=sininv(a);
    break;
    case 9:
    b=cosinv(a);
    break;
    case 10:
    b=taninv(a);
    break;
    
  
    
    return 0;
   } 
}



