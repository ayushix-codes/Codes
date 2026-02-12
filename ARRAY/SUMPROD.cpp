// Sum of elements at odd index and product of elements at even index

#include<iostream>
using namespace std;

int sumodd(int arr[],int n){
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        if(i % 2 != 0){
            sum += arr[i];
        }
    }
    return sum;
}

int producteven(int arr[],int n){
    int product = 1;
    for(int i = 0 ; i < n ; i++){
        if(i % 2 == 0){
            product *= arr[i];
        }
    }
    return product;
}

int main(){
    int n;
    cout<<"Enter the number of elements in an array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements of the array : "<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    cout<<"Sum of elements at odd index is : "<<sumodd(arr,n)<<endl;
    cout<<"Product of elements at even index is : "<<producteven(arr,n);

    return 0;
}