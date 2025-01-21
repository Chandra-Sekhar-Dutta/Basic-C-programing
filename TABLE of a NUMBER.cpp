#include <stdio.h>
int main() {
     int n,i,product,a;
    printf("The factor user wants:");
    scanf("%d",&n);
    printf("The number of multiples the user wants:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
    product=n*i;
    printf("\n%d",product);
    }
   
    for(i=a;i>=1;i--)
    {
    product=n*i;
    printf("\n%d",product);
    }
}

