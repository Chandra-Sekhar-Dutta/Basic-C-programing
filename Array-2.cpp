//To put 18%GST on the products.
#include<stdio.h>
int main(){
    float price[3];//to initialise the array we can also write in this way-float price[] or float price[3]={10.56,50.34,45.34}.
    printf("print the prices of 3 products-");
    scanf("%f %f %f",&price[0],&price[1],&price[2]);
    printf("Total price of product1=%f", (price[0]+(price[0]*0.18)));
    printf("\nTotal price of product2=%f", (price[1]+(price[1]*0.18)));
    printf("\nTotal price of product3=%f", (price[2]+(price[2]*0.18)));

}
