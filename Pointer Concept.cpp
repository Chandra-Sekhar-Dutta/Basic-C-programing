//Pointer.
//* shows the value and & shows the address.
//** functions to point the pointer.
#include <stdio.h>
int main() 
{
    //%p shows the address of the pointer in hexadecimal format.
   int a;
   int *a1=&a;
   int **a2=&a1;
   printf("Put the value of a:");
   scanf("%d",&a);
   printf("The value of a=%d",a);
   printf("\nThe value a stores=%d",a);
   printf("\nThe value a1 stores=%d",*a1);
   printf("\nThe value a2 stores=%d",**a2);
   printf("\nThe address of a is=%p",&a);
   printf("\nThe address of a in another form is=%u",&a);
   printf("\nThe address of a, which is stored by a1=%d",a1);
   printf("\nThe address of a1 is=%p",&a1);
   printf("\nThe address of a1 in another form is=%u",&a1);
   printf("\nThe address of a1, which is stored by a2=%d",a2);
   printf("\nThe address of a2 is=%p",&a2);
   printf("\nThe address of a2 in another form is=%u",&a2);
   *a1+=5;//the address will be same but the value of the addresss will be changed.
   printf("\n\n\nThe value of a after a1 is increased by 5=%d",a);
   printf("\nThe value of a1 is increased by 5=%d",*a1);
    return 0;
}
