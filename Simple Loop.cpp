//Simple loop.
#include <stdio.h>

int main() {
   int i;
   printf("The numbers are below:-");
   for(i==0;i<=20;i++)
   //printf("\n%d",i++); 
   /*i++ means compiler can use i in the first place but it
  has the memory of increased i
  ++i means increase the value the use i
  similarly,i-- means post decrement and --i means pre decrement.*/
  printf("\n%d",i);//in this line compliler prints the increased value of i.

    return 0;
}
