#include <stdio.h>
int temp(float C,float F);
temp(float C,float F)
{
    float a,b;
a=(C*9/5)+32;
b=(F-32)*0.555;
printf("Temp. in F degrees=%f",a);
printf("\n");
printf("Temp. in C degrees=%f",b);
return 0;
}
int main() {
	float C,F;
   printf("Type the temp. in Celsius:");
   scanf("%f",&C);
   printf("Type the temp. in Fahrenheit:");
   scanf("%f",&F);
  
  temp(C,F);
   
    return 0;
}
