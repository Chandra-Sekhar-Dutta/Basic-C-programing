#include <stdio.h>
int main() {
    int marks[2][3];
    printf("Values of 1st row are=");
    scanf("%d %d %d",&marks[0][0],&marks[0][1],&marks[0][2]);
    printf("Values of the 2nd row are=");
    scanf("%d %d %d",&marks[1][0],&marks[1][1],&marks[1][2]);
    printf("The matrix is=");
    printf("\n%d",marks[0][0]);
    printf("\t%d",marks[0][1]);
    printf("\t%d",marks[0][2]);
    printf("\n%d",marks[1][0]);
    printf("\t%d",marks[1][1]);
    printf("\t%d",marks[1][2]);

    return 0;
}
