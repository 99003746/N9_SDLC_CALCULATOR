#include"basic_trig.h"
#include<stdio.h>
#include<math.h>
void setUp(void){}
void tearDown(void){}

int main()
{
    int symbols;
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
    case 5:
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
