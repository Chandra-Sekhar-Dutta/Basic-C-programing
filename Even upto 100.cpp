#include<stdio.h>
int main()
{
	int a,i;
	printf("The even numbers from 1 to 100 are=");
	scanf("%d",&i);
for(a=1;a<=i;a++)
{

	if(a%2==0)
	printf("\n%d\n",a);
}
}
