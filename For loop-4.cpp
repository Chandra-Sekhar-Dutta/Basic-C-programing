#include <stdio.h>
int main()
{
	int i,a,b;
	printf("input a:-");
	scanf("%d",&a);
	printf("Number of times the loop continues on:");
	scanf("%d",&b);
	for(i=0;i<=b;i++)
	{
a=a+i;

printf("\n %d",a);
		a=0;
	}
	
}
