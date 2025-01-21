#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=2;i+=2)
	//i is the no. of times we can check whether the number is even or odd.
	{
	int Number;
	printf("The Number=");
	scanf("%d",&Number);
	//(a%2==0)?printf("Even"):printf("Odd");
	if(Number%2==1)
		printf("The number is Odd\n");
	else
		printf("The number is Even\n");
    }
	return 0;
}

