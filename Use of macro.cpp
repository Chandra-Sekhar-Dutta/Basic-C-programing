#include <stdio.h>

#define TEXT "Hello World!"
// The # is the preprocessor directive.
// TEXT is the name of the macro which doesn't store any value but substitutes its value when called in the program.
// It reduces the size of the code.

#define MUL(a,b) (a * b)
// This macro multiplies two values and should be enclosed in parentheses for safety.

#define MAX(a,b)  \
    if (a > b) \
        printf("\n%d is bigger",a); \
    else \
        printf("\n%d is bigger",b); \
        
// MAX is defined as a macro to print whether a or b is bigger.


int main() {
    int a, b;
    printf(TEXT);
    printf("\na=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("The product is= %d", MUL(a, b));

    MAX(a, b);

    return 0;
}

