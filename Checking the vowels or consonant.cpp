#include <stdio.h> 
int main()
{
    char str_152;    
    printf("Enter a character: ");
    scanf("%c",&str_152);
    if((str_152>='A' && str_152<='Z') || (str_152>='a' && str_152<='z'))
    {
        switch(str_152)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c is a VOWEL.\n",str_152);
                break;
            default:
                printf("%c is a CONSONANT.\n",str_152);            
        }
    }
    else
    {
        printf("%c is not an alphabet.\n",str_152);
}
}
