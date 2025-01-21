//Check prime number
#include<stdio.h>
int main()
{

int Number, i,c=0;
//i is iterator or counter.
printf("Enter the Number=");
scanf("%d",&Number);
//for loop is terminated after checking that the remainder is 0 or not.
for(i=1;i<=Number;i++)
{
//first 'if' checks whether remainder is 0 or not.
if (Number%i==0)
c++;
/*c is the number of factors, c must be 2 for prime numbers. c++ represents that if remainder is 0, then c from value 0 is increased to plus 1. 
Again if the remainder becomes 0, then the value of c is increased by 1 from 1.*/ 
	
}
//second 'if' checks whether there are two factors ar no. This is the main logic of the problem. 
if (c==2)

printf("The given number is a Prime number.\n");
else
printf("The given number is a Composite Number.\n");

}
