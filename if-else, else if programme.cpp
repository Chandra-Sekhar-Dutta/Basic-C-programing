//PASS-FAIL
#include <stdio.h>
int main() 
{
    float A;
    printf("The Grade is=");
    scanf("%f",&A);
    if(A==100)
    {
	printf("\nMarvelous result.");
	printf("\nA certificate would be provided.");
}
	
	else if(A>100)
	{
	printf("\nNot possible.");
	}

    else if(A<100 && A>=90)
{
        printf("\nPass.");
        printf("\nOutstanding result.");
}
    else if(A>=80)
{
    printf("Pass.");
    printf("\nGood.");
}
   else if(A>=70)
{
   printf("Pass.");
   printf("\nAvergae.");
}
else if(A>=60)
{
printf("Pass.");
printf("\nWork hard.");
}
else if(A>=50)
{
printf("Pass.");
printf("\nNot good.");
}
else if(A>=40)
{
    printf("Pass.");
    printf("\nPoor.");
}
else if(30<=A && A<40)
{
printf("Fail.");
printf("\nNeed to appear for complementary paper.");
}
else if(0>A)
{
printf("\nNot valid marks.");
}
else
{
printf("Fail.");
printf("\nWon't promoted to next Standard.");
}
    return 0;
}
