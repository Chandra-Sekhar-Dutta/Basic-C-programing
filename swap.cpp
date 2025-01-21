#include<stdio.h>
int main()
{
	int a=10,b=20,x;
	x=a;
	a=b;
	b=x;
	printf("%d %d",a,b);
	return 0;
}

