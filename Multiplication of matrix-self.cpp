#include <stdio.h>

int main() {
    int mat1[10][10],mat2[10][10],product_mat[10][10],i,j,m,n,o,p,q,r,k;
    printf("Enter the order of mat1=m*n=");
    scanf("%d %d",&m,&n);
    printf("mat1=\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the order of mat2=o*p=");
    scanf("%d %d",&o,&p);
    printf("mat2=\n");
    for(i=0;i<o;i++){
        for(j=0;j<p;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    if(n==o){
        q=m;r=p;
        for(i=0;i<q;i++){
            
        for(j=0;j<r;j++){
        	product_mat[i][j]=0;
        	for(k=0;k<p;k++){
			}
            product_mat[i][j]+=mat1[i][k]*mat2[k][j];
        }
    }

    for(i=0;i<o;i++){
        for(j=0;j<p;j++){
            printf("%d\t",product_mat[i][j]);
        }
        printf("\n");
    }
}

else{
    printf("Mutiplication not possible");
}

    return 0;
}
