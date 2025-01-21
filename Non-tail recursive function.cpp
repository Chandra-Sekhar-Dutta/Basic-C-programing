

#include <stdio.h>

void func1(int a){
    if (a==0){
        return;
    }
    
    else{
        
         func1(a-1);
        printf("%d ",a);
    }
}

int func2(int n){
    if (n==1){
        return 0;
    }
    
    else{
        return  1+func2(n/2);
    }
}

int main()
{
    func1(3);
    printf("\n%d",func2(8));

    return 0;
}

