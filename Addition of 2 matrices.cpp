#include<stdio.h>
int main() {
    int m, n, p, q, i, j;
    int a[10][10], b[10][10], res[10][10];

    printf("Enter the order of first matrix\n");
    scanf("%d%d", & m, & n);
    printf("Enter the order of second matrix\n");
    scanf("%d%d", & p, & q);

    if (n != p) {
        printf("Matrix is incompatible for multiplication\n");
    } 
	else
	 {
        printf("Enter the elements of Matrix-A:\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                scanf("%d", & a[i][j]);
            }
        }

        printf("Enter the elements of Matrix-B:\n");
        for (i = 0; i < p; i++) {
            for (j = 0; j < q; j++) {
                scanf("%d", & b[i][j]);
            }
        }

        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
               
                    res[i][j] = a[i][j] + b[i][j];
                
            }
        }

        printf("The summation of the two matrices is:-\n");

        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                printf("%d\t", res[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

