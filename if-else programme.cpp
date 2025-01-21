#include<stdio.h>
int main()
{
    float a,b,choice;
    printf("Enter a:");
    scanf("%f",&a);
    printf("Enter b:");
    scanf("%f",&b);
    printf("Enter choice:");
    scanf("%f",&choice);
    if(choice==1){
        printf("%f",a+b);
    }
    else if(choice==2){
        printf("%f",a-b);
    }
    else if(choice==3){
        printf("%f",a*b);
    }
    else if(choice==4){
        if(b==0){
            printf("No division");
        }
        else{
            printf("%f",a/b);
        }
    }
    else{
        printf("error");
    }
}
