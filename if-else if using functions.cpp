#include <stdio.h>
char namaste();
char bonjour();
char namaste(){
printf("Namaste");}
char bonjour()
{printf("Bonjour");}
int main() {
    char Ch,f,i;
    printf("Enter 'i' if you are Indian or enter 'f' if you are French:");
    scanf("%c",&Ch);
if(Ch=='i')
{namaste();}
else if(Ch=='f')
{bonjour();}
    return 0;}

