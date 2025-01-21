#include<stdio.h>

int funct(int a){
    if(a==0){
        return 1;
    }
    else{
        return 7+funct(a-2);
    }
}

int main(){
    int a;
    scanf("%d",&a);
    printf("%d",funct(a));
}
