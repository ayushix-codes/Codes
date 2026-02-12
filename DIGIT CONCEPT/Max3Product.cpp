#include<iostream>
using namespace std;

int Max(int a, int b){
    if(a>b){
        return a;
    }
    else return b;
}

void sort(int arr[],int n){
    for(int i = 0 ; i< n-1 ; i++){
        for(int j = 0 ; j < n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    sort(arr,n);
    
    int option1 = arr[n-1]*arr[n-2]*arr[n-3];
    int option2 = arr[0]*arr[1]*arr[n-1];

    cout<<"Product of max3 : "<<Max(option1,option2);
    return 0;
}