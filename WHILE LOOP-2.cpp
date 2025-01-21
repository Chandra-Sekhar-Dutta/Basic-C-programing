#include<stdio.h>
int main()
{
    int i=0,n;
    printf("The number the user wants:");
    scanf("%d",&n);
//    while(i<=n)
//    {
//    printf("%d\n",i);
//    i++;    
//}
do
    {
        printf("%d\n",i);
        i=i++;
    }
    while(i<=n);
//for(i=0;i<=n;i++)
//{
//printf("\n%d",i);
//}
}

