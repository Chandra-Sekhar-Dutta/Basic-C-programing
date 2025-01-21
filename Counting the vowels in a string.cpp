#include <stdio.h>
#include<string.h>
int main() {
    int count=0;
    char word[100];
    printf("Type the word=");
    scanf("%c",&word);
    for(int i=0;word[i]!='\0';i++)
    {
        if(word[i]=='a'||word[i]=='A'||word[i]=='e'||word[i]=='E'||
        word[i]=='i'||word[i]=='I'||word[i]=='o'||word[i]=='O'||
        word[i]=='u'||word[i]=='U')
        {
             count++;
        }
        printf("%d",count);
    }
    return 0;
    
}
