#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,i=0;
    char str[100];
    printf("Enter the word:");
    gets(str);
    while(str[i]!='\0'){
        if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')){
            count++;
        }
        i++;
    }
    printf("The no. of vowels are: %d",count);
}
