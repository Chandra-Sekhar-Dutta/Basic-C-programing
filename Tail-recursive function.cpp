

#include <stdio.h>

void func(int a){
    if (a==0){
        return;
    }
    
    else{
        printf("%d ",a);
        return func(a-1);
    }
}

int main()
{
    func(3);

    return 0;
}

