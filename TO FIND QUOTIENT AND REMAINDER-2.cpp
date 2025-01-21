#include <stdio.h>

int main() {
   int QUOTENT, REMAINDER, DIVISOR, DIVIDENT;
printf("The value of DIVISOR=");
scanf("%d",&DIVISOR);
printf("The value of DIVIDENT=");
scanf("%d",&DIVIDENT);
if(DIVISOR==0)
{
printf("NOT DIVISIBLE");
}
else
{
QUOTENT=DIVIDENT/DIVISOR;
REMAINDER=DIVIDENT%DIVISOR;
printf("The value of QUOTENT = %d",QUOTENT);
printf("\nThe value of REMAINDER = %d",REMAINDER);
}

    return 0;
}
