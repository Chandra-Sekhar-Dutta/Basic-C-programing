#include <stdio.h>

int main() {
   int a[10][10],b[10][10],c[10][10],m,n,o,p,i,j;
printf("The order of the matrix 'a'=m*n=");
scanf("%d %d",&m,&n);
   printf("The matrix=\n");
   for(i=0;i<m;i++){
       for(j=0;j<n;j++){
           scanf("%d",&a[i][j]);
       }
   }
   for(i=0;i<m;i++){
       for(j=0;j<n;j++){
           printf("%d\t",a[i][j]);
       }
       printf("\n");
   }
   
   printf("The order of the matrix 'b'=o*p=");
scanf("%d %d",&o,&p);
   printf("The matrix=\n");
   for(i=0;i<o;i++){
       for(j=0;j<p;j++){
           scanf("%d",&b[i][j]);
       }
   }
   for(i=0;i<o;i++){
       for(j=0;j<p;j++){
           printf("%d\t",b[i][j]);
       }
       printf("\n");
   }
        if(m==o&&n==p){
   printf("The Sum of two matrices,a+b=\n");
   for(i=0;i<o;i++){
       for(j=0;j<p;j++){
   c[i][j]=a[i][j]+b[i][j];
       }
   }
   for(i=0;i<o;i++){
       for(j=0;j<p;j++){
           printf("%d\t",c[i][j]);
       }
       printf("\n");
}
}

else{
           printf("\nAddition is not possible");
}

    return 0;
}
