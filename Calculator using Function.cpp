#include<stdio.h>
int cal();
int cal(){
	int a,b;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	int sum=a+b;
	int diff=a-b;
	printf("Sum =%d",sum);
	printf("\nDifference =%d",diff);
	return 0;
}
int main(){
	cal();
	return 0;
}
