#include <stdio.h>

int main() {
    int n,i;
    printf("Enter the number of terms, the user wants=");
    scanf("%d",&n);
    int fibonacci[n];
    fibonacci[0]=0;
    fibonacci[1]=1;
    printf("%d",fibonacci[0]);//this line needs to be printed separately as they don't get printed using this code.
    printf("\t%d",fibonacci[1]);//this line needs to be printed separately as they don't get printed using this code.
    for(i=2;i<n;i++)
    {fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
    //it is the formula of fibonacci for 'n' terms.
    printf("\t%d",fibonacci[i]);}
    return 0;
}
