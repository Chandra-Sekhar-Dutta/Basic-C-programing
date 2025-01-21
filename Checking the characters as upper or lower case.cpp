// Checking the characters as upper case or lower cases
#include <stdio.h>

int main() {
    char Character;
    printf("Type the character:");
    scanf("%c",&Character);
    if(Character>='A' && Character<='Z')
    {
    /*C compiler knows the ASCII value of each character. It can be upper case or it may be lower case also*/ 
    printf("The character is in Upper case.");
}
    else if(Character>='a' && Character<='z')
    {
        printf("The character is in Smaller case.");
        
    }
    else
    {
    
        printf("The Character may not be in english");
    }
    
}
