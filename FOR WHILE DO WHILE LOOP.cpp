#include<stdio.h>
int main()
{
    int i=0,n,a=0;
    printf("The number the user wants:");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        i++;    
    }
    
    for(i=0;i<=n;i++){
        printf("\n%d",i);
    }
   printf("\n");
   do {
        printf("\n%d", a);
        a = a + 1;
   }while( a <= n );
 
        return 0;
   
}
