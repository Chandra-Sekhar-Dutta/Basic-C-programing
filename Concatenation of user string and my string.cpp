#include <stdio.h>
#include<string.h>
int main() {
    char userpassword[100];
    printf("Enter your password=");
    scanf("%s",userpassword);
    char mypassword[100]="abc100";
    char newpassword[100];
    strcat(userpassword,mypassword);
    printf("The new password is=");
    puts(userpassword);
    return 0;
    
}
