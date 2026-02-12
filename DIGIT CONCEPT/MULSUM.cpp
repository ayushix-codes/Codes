#include<iostream>
using namespace std;

int sum(int n){
    int digit , sum = 0;

    while(n>0){
        digit = n % 10;
        if(digit % 2 == 0){
            sum += digit;
        }
        n /= 10;
    }
    return sum;
}

int product(int n){
    int digit , product = 1;

     while(n>0){
        digit = n % 10;
        if(digit % 2 != 0){
            product *= digit;
        }
        n /= 10;
    }
    return product;
}

int main(){
    int n;

    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Sum of even digits : "<<sum(n)<<endl;
    cout<<"Product of odd digits : "<<product(n);
    return 0;
    
}