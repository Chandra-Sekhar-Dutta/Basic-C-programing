#include <stdio.h>
void sum(int a,int b);
void sum(int a,int b)
 {
   int  sum=a+b;
    
   //return 0;
 }
 void diff(int c,int d);
 void diff(int c,int d){
     int diff=c-d;
     
     //return 0;
 }

int main() {
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
sum(a,b);
printf("%d",sum);
printf("\n");
diff(c,d);
printf("%d",diff);
    return 0;
}
