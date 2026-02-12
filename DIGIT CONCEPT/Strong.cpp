#include<iostream>
using namespace std;

int fact(int n){
    if (n==0||n==1){
        return 1;
    }

    else return n*fact(n-1);
}

int main(){
int n ,digit,sum = 0;

cout<<"Enter the number : ";
cin>>n;

int ON = n;

while(n>0){
    digit = n%10;
    sum += fact(digit);
    n /= 10;
}

if(sum == ON){
    cout<<ON<<" is a strong number"<<endl;
}
else{
    cout<<ON<<" is not a strong number"<<endl;
}

    return 0;
}