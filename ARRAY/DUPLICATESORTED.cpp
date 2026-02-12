#include<iostream>
using namespace std;
    int removeduplicate(int arr[], int n){
        int j = 0;  // comparisions

        for(int i = 1 ; i < n ; i++){
            if(arr[i] != arr[j]){
                j++;
                arr[j] = arr[i];    // removing the duplicate
            }
        }
        return j+1; // new size of the array after removal of duplicates
    }

int main(){
    int n; 
    cout<<"Enter the number of elements of array ; ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements of the array : "<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    int newsize = removeduplicate(arr,n);

    for(int i = 0 ; i < newsize ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}