#include<stdio.h>
int main()
{
	int marks[3];
	printf("enter the marks of physics:");
	scanf("%d",&marks[0]);
	printf("enter the marks of maths:");
	scanf("%d",&marks[1]);
	printf("enter the marks of chemistry:");
	scanf("%d",&marks[2]);
	printf("marks of physics=%d \nmarks of maths=%d \nmarks of chemistry=%d",marks[0],marks[1],marks[2]);
}
