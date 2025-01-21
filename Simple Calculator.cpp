#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,Modulus;
	float Sum,Diff,Multiply,Division,Square_of_a,Square_of_b,Cube_of_a,Cube_of_b,Power,Average;
	printf("THE VALUE OF a-");
	scanf("%f",&a);
	printf("THE VALUE OF b-");
	scanf("%f",&b);

//To find simple calculations using a and b.

	Sum=a+b;
	Diff=a-b;
	Multiply=a*b;
	Division=(a/b);
	Modulus=a%b;

//To find the powers using a and b.

	Square_of_a=a*a;
	Square_of_b=b*b;
	
	Cube_of_a=a*a*a;
	Cube_of_b=b*b*b;
	
	Power=pow(a,b);

//To find the average of a and b.
	
	Average=(a+b)/2;
	
	printf("THE VALUE OF Sum=%f",Sum);
	printf("\nTHE VALUE OF Difference=%f",Diff);
	printf("\nTHE VALUE OF Multiplication=%f",Multiply);
	printf("\nTHE VALUE OF Division=%f",Division);
	printf("\nTHE VALUE OF Modulus=%d",Modulus);

	printf("\nThe Square of a=%f",Square_of_a);
	printf("\nThe Square of b=%f",Square_of_b);

	printf("\nThe Cube of a=%f",Cube_of_a);
	printf("\nThe Cube of b=%f",Cube_of_b);

	printf("\nThe value of a^b=%f",Power);
	
	printf("\nThe Average is=%f",Average);	
}
