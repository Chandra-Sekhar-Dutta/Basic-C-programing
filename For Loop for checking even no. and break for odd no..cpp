//if odd, then the loop continues, and if even then the loop breaks.
#include<stdio.h>
int main()
{
int i,n;
printf("The number of times, the user wants to check:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	int a;
	printf("\n input a:");
	scanf("%d",&a);
if(a%2!=0)
{printf("\n The number is odd.\n");
a=0;
}
else 
{
printf("\nThe number is even.\n");
break;
}

}
}

