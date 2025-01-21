#include<stdio.h>
int main()
{
float P,R,T,SI,AMOUNT;
printf("The value of PRINCIPAL AMOUNT-");
scanf("%f",&P);
printf("The value of Rate-");
scanf("%f",&R);
printf("The value of Time-");
scanf("%f",&T);
SI=(P*R*T)/100;
printf("The value of SI-%f",SI);
AMOUNT=SI+P;
printf("\nThe value of AMOUNT-%f",AMOUNT);

return 0;


}
