//1 to 100, check how many numbers have factors more than first  5 factors.
#include<stdio.h>
int main()
{
int i,c,j;
for(i=1;i<100;i++)
{
c=0;
for(j=1;j<=i;j++)
{
	if(i%j==0)
	{
		c++;
	}
}
if(c>5)
	printf("%d ",i);
}
}

