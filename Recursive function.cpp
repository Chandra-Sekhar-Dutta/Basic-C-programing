#include <iostream>

using namespace std;

int num = 0;

void odd(int);

void even(int num) {
    if(num == 20){
        cout << num;
    }
    else {
        cout << num <<" ";
        num++;
        odd(num);
    }
}

void odd(int num) {
    cout << num <<" ";
    num++;
    even(num);
}

int factorial(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main() {
    even(num);
    cout<<"\n";
    int n;
    cout<<"Enter the number=";
    cin>>n;
    cout<<factorial(n);
    return 0;
}

