//This code is not completly correct for perfect square no.sS
#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,D;
float x,y,R,A,B;
printf("The equation is -> ax^2+bx+c=0");
printf("\nThe coefficient of x^2=a=");
scanf("%d",&a);
printf("The coefficient of x=b=");
scanf("%d",&b);
printf("The value of c=");
scanf("%d",&c);
D=(pow(b,2)-4*a*c);
R=sqrt(D);
A=(-b+R);
x=(A/(2*a));
B=(-b-R);
y=(B/(2*a));
if(D>=0)
{	
printf("%f",x);
printf("\n %f",y);
printf("\nx is real");
}
else
{
printf("\nx is imaginary");
}
}
