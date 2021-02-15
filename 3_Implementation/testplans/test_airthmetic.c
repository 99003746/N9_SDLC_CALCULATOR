#include <stdio.h>
#include <math.h>
int main()
{
    float san1,san2,res,mults,divs,subs,adds,sine,cosi,tani,coseci,seci,coti,arcsini,arccosi,arctani,arccoseci,arcseci,arccoti,angsani,ang;
    int symbols;
printf("For Addition press-1\nFor Substraction press-2\nFor Multiplication press-3\nFor Divison press-4\nAll Trigonometric Answer Will Be In Radian\nFor Sin press-5\nFor Cos press-6\nFor Tan press-7\nFor Cosec press-8\nFor Sec press-9\nFor Cot press-10\nFor Sin Inverse press-11\nFor Cos Inverse press-12\nFor Tan Inverse press-13\nFor Cosec Inverse press-14\nFor Sec Inverse press-15\nFor Cot Inverse press-16\n");    
    //printf("Enter Symbol(1,2,3,4,5,6,7,8,9,10,11,12)\n");
    scanf("%d",&symbols);
   switch(symbols)
    {
    case 4:
       printf("Enter Two Numbers For Division\n");
       scanf("%f",&san1);
         scanf("%f",&san2);
         divs=san1/san2;
         if (san2==0)
         {
             printf("Calculator Cannot Print This Value");
         }
         else
         {
         printf("division=%f\n",divs);
         }
         break;
         
         return 0;
         }
}
