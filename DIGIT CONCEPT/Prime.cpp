#include<iostream>
#include<cmath>
using namespace std;

bool Prime(int n);
bool Prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
   if(n<=1){
    cout<<"Neither prime nor composite";
   }
   else if(Prime(n)){
    cout<<"Prime number";
   }
   else{
    cout<<"Not a Prime number";
   }
    return 0;;
}