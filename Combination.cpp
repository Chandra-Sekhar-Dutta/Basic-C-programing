// COMBINATION
#include <stdio.h>

int main() {
    //ncr=n!/r!*(n-r)!
	int n,r,p=1,q=1,s=1;
    printf("The value of 'n' :");
    scanf("%d",&n);
    printf("The value of 'r':");
    scanf("%d",&r);
    int c=n-r;
    printf("c=n-r=%d",c);
    for(int i=1;i<=n;i++){
    p=p*i;
    }
    printf("\nThe value of n!=%d",p);
    for(int j=1;j<=r;j++){
        q=q*j;
    }
    printf("\nThe value of r!=%d",q);
    for(int k=1;k<=c;k++){
        s=s*k;
    }
    printf("\nThe value of (n-r)!=%d",s);
    
    int Combination=p/(s*q);
    printf("\nThe value of Combination=%d",Combination);
    return 0;
}
