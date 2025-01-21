#include<stdio.h>
int main()
{
int a,p=1,i;
printf("The number is=");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
p=p*i;	
}
printf("%d",p);
return 0;
}
