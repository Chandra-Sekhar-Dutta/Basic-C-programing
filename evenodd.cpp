#include<stdio.h>
int main()
{
	for(int i=100;i<=101;i++)
	{
	int a;
	
	scanf("%d",&a);
	//(a%2==0)?printf("Even"):printf("Odd");
	if(a%2==1)
		printf("Odd\n");
	else
		printf("Even\n");
    }
	return 0;
}

