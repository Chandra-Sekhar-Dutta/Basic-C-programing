//Sum of first n terms and difference of first n terms.
#include <stdio.h>

int main() {
    int i,n,sum,k;
    printf("The sum of first n terms=");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
sum=sum+i;
printf("\n%d",sum);
    }
    for(i=n;i>=1;--i)
	{
		sum=sum-i;
		k=sum;
printf("\n%d",k);
    }
	return 0;
}
