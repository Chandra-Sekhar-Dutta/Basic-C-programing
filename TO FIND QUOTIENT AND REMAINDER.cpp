// TO FIND THE QUOTIENT AND REMAINDER
#include<stdio.h>
int main()
{
int QUOTENT, REMAINDER, DIVISOR, DIVIDENT;
printf("The value of DIVISOR=");
scanf("%d",&DIVISOR);
printf("The value of DIVIDENT=");
scanf("%d",&DIVIDENT);
QUOTENT=DIVIDENT/DIVISOR;
REMAINDER=DIVIDENT%DIVISOR;
printf("The value of QUOTENT = %d",QUOTENT);
printf("\n The value of REMAINDER = %d",REMAINDER);
return 0;
}
