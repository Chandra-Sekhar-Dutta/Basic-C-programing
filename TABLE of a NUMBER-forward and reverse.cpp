#include <stdio.h>
int main() {
     int n,i,product,a;
    printf("The factor user wants:");
    scanf("%d",&n);
    printf("The number of multiples the user wants:");
    scanf("%d",&a);
    printf("Table in forward:-");
    for(i=0;i<=a;i++)
    {
    product=n*i;
    printf("\n%dx%d=%d",a,i,product);
    }
   printf("\nTable in reverse:-");
    for(i=a;i>=0;i--)
    {
    product=n*i;
    printf("\n%dx%d=%d",a,i,product);
    }
}

