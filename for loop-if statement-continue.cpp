#include<stdio.h>
int main()
{
int i,n;
printf("The number of time the user wants the result:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
    int a=0;
printf("Type the required number:");
scanf("%d",&a);
if(a%10==0)
{
    printf("\nIt is a multiple of 10. Hence these numbers are skipped.\n");
continue;
}
else
a=a+i;
printf("\n%d\n",a);
}
}
