//1 to 20 print fibonacci series
#include<stdio.h>
int main()
{
	int a=0,b=1,i,c,n;
	printf("Type the number=");
	scanf("%d",&n);
	printf("%d %d ",a,b);
	//b=a+p;
	for(i=1;i<=n;i++)
	{
	c=a+b;
	printf("%d ",c);
	a=b;
	b=c;
	//b=a;
	}
	//printf("%d",b);
}
