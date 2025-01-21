//break the loop if n=i.
#include<stdio.h>
int main()
{
    //a is greatest
    int a,i,n;
    //printf("Enter the value of a:");
    //scanf("%d",&a);
    printf("Enter the value of i:");
    scanf("%d",&i);
    for(n=0;n<i;n++){
        if(n!=i){
            printf("%d\t",n);
        }
    }
}
