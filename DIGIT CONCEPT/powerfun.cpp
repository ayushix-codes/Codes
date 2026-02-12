#include<iostream>
using namespace std;

int pow(int base, int exponent){
    int Final = 1;
    for(int i = 1 ; i<=exponent ; i++){
        Final *= base;
    }

    return Final;
}

int main(){
    int base, exp;

    cout<<"Enter the base : ";
    cin>>base;
    cout<<"Enter the exponent : ";
    cin>>exp;

    cout<<pow(base,exp)<<endl;
    
    return 0;
}