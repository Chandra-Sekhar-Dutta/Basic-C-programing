#include <stdio.h>
#include<string.h>
int main()
{
printf("Type your first string-");
char string1[100];
char string2[50];
char string3[25];
gets(string1);
printf("Your first string is-");
puts(string1);
printf("Type your second string-");
gets(string2);
printf("Your second string is=");
puts(string2);
printf("Your third string-");
gets(string3);
printf("\n");
printf("Lenght of your first string is=%d",strlen(string1));
printf("\nLength of your second string is=%d",strlen(string2));
printf("\nLength of your third string is=%d",strlen(string3));
printf("\n");
strcpy(string1,string2);
printf("\n");
printf("String2 copied over string1-");
puts(string1);
printf("\n");
strcat(string2,string3);
printf("Two string concastenates into-");
puts(string2);
printf("\n");
printf("Comparision between two strings, i.e., string1 and string2=%d",strcmp(string1,string2));
}
