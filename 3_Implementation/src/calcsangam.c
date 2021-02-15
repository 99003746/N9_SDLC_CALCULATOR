#include <stdio.h>
#include <math.h>
int main()
{
    float san1,san2,res,mults,divs,subs,adds,sine,cosi,tani,coseci,seci,coti,arcsini,arccosi,arctani,arccoseci,arcseci,arccoti,ang;
    int symbols;
printf("For Addition press-1\nFor Substraction press-2\nFor Multiplication press-3\nFor Divison press-4\nAll Trigonometric Answer Will Be In Radian\nFor Sin press-5\nFor Cos press-6\nFor Tan press-7\nFor Cosec press-8\nFor Sec press-9\nFor Cot press-10\nFor Sin Inverse press-11\nFor Cos Inverse press-12\nFor Tan Inverse press-13\nFor Cosec Inverse press-14\nFor Sec Inverse press-15\nFor Cot Inverse press-16\n");    
    //printf("Enter Symbol(1,2,3,4,5,6,7,8,9,10,11,12)\n");
    //addition
    //subtraction
    //multiplication
    //division
    //trigonometric operation
    scanf("%d",&symbols);
   switch(symbols)
    {
        case 1: //addition
        printf("Enter Two Number For Addition\n"); 
        scanf("%f",&san1);
         scanf("%f",&san2);
                adds=san1+san2;
                printf("addition=%f\n",adds);
                break;
        case 2: //substraction
        printf("Enter Two Number For Substraction\n");
        scanf("%f",&san1);
         scanf("%f",&san2);
        subs=san1-san2;
        printf("substraction=%f\n",subs);
        break;
        case 3:
        printf("Enter Two Number For Multiplication\n");
        scanf("%f",&san1);
         scanf("%f",&san2);
         mults=san1*san2;
         printf("multiplication=%f\n",mults);
         break;
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
         case 5: //sine value in radian
          printf("Enter The Value Of Angle\n");
          scanf("%f",&ang);
          sine=sin(ang);
          printf("sin=%f\n",sine);
        break;
         case 6: //cosine value in radian
            printf("Enter The Value Of angle\n");
           scanf("%f",&ang);
           cosi=cos(ang);
           printf("cos=%f\n",cosi);
          break;
               case 7: //tan
          printf("Enter The Value Of Angle\n");
          scanf("%f",&ang);
          tani=tan(ang);
          printf("tan=%f\n",tani);
          break;
       case 8: //cosec
          printf("Enter The Value Of Angle\n");
            scanf("%f",&ang);
           coseci=1/sin(ang);
            printf("cosec=%f\n",coseci);
            break;
        case 9: //sec
        printf("Enter The Value Of Angle\n");
         scanf("%f",&ang);
         seci=1/cos(ang);
       printf("sec=%f\n",seci);
        break;
       case 10: //cot
        printf("Enter The Value Of Angle\n");
       scanf("%f",&ang);
        coti=1/tan(ang);
          printf("cot=%f\n",coti);
        break;
       case 11: //sine inverse
         printf("Enter The Value\n");
            scanf("%f",&ang);
           arcsini=asin(ang);
           printf("sin inverse=%f\n",arcsini);
          break;
      case 12: //cos inverse
        printf("Enter The Value\n");
        scanf("%f",&ang);
        arccosi=acos(ang);
        printf("cos inverse=%f\n",arccosi);
        break;
     case 13: //tan inverse
     printf("Enter The Value\n");
      scanf("%f",&ang);
     arctani=atan(ang);
     printf("tan inverse=%f\n",arctani);
     break;
    case 14: //cosec inverse
     printf("Enter The Value\n");
     scanf("%f",&ang);
    arccoseci=1/asin(ang);
   printf("cosec inverse=%f\n",arccoseci);
   break;
   case 15: //sec inverse
   printf("Enter The Value\n");
   scanf("%f",&ang);
   arcseci=1/acos(ang);
   printf("sec inverse=%f\n",arcseci);
    break;
   case 16: // cot inverse
   printf("Enter The Value\n");
   scanf("%f",&ang);
   arccoti=1/atan(ang);
    printf("cot inverse=%f\n",arccoti);
   break;



    }
 return 0;
}
///commented for test
//calc program completed
//all trigonometric values will be in radian
