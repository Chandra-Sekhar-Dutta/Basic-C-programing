#include <stdio.h>
#include<string.h>
int main() {
    char word[100];
    printf("Type the word=");
    scanf("%c",&word);
    for(int i=0;word[i]!='\0';i++)
    {
        if(word[i]=='u')
        {
            printf("yes");
        }
       else
       printf("no");
    }
    return 0;
    
}
