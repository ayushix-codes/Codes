#include<iostream>
using namespace std;

int fact(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    else return fact(n-1)*n;
}

int trailing(int n){
    int digit , count = 0;

    while(n>0){
        digit = n % 10;
            if(digit == 0){
                count++;
            }
        n /= 10;
    }
    return count;
}

int main(){
    int n;
    int zero;
    cout<<"Enter the number : ";
    cin>>n;

    cout<<"Factorial of "<<n<<" is :"<<fact(n);
    cout<<endl;
    zero = trailing(fact(n));
    cout<<"Trailing zeros are : "<<zero;
    return 0;
}