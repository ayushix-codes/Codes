#include<iostream>
using namespace std;

void insert(int arr[],int &size,int data){
        
    arr[size++] = data;
}

void insertpos(int arr[],int &size, int pos, int data){
    if(pos < 0 || pos > size){
        cout<<"Invalid position\n";
        return;
    }
    else{
        for(int i = size ; i > pos ; i--){
            arr[i] = arr[i-1];
        }
        arr[pos] = data;
        size++;
    }
}

void deletbeg(int arr[], int &size){
    if(size==0){
        cout<<"Array is empty";
    }
    else{
        for(int i = 0 ; i < size - 1 ; i++){
            arr[i] = arr[i+1];
        }
        size--;
    }
}

void deletpos(int arr[], int &size, int pos){
    if(size == 0){
        cout<<"Array is empty";
    }
    else{
        for(int i = pos ; i < size-1 ; i++){
            arr[i] = arr[i+1];
        }
        size--;
    }
}

void deletend(int arr[], int &size){
    if(size==0){
        cout<<"Array is empty";
    }
    else{
        size--;
    }
}

void print(int arr[],int size){
    if(size == 0){
        cout<<"Array is empty!";
    }
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[100];
    int n = 0;
    int data;
    int position;
    int choice;

    while(true){
    
    cout<<endl<<"....Array Menu...."<<endl;
    cout<<endl<<"1. Insert at end"<<endl;
    cout<<endl<<"2. Insert at position"<<endl;
    cout<<endl<<"3. Delete at beg"<<endl;
    cout<<endl<<"4. Delete at position"<<endl;
    cout<<endl<<"5. Delete at end"<<endl;
    cout<<endl<<"6. Display"<<endl;
    cout<<endl<<"7. Exit"<<endl;
    cout<<"Enter the choice : ";
    cin>>choice;
    
    switch(choice){
        case 1:
            cout<<"Enter the data : ";
            cin>>data;
            insert(arr,n,data);
            break;

        case 2:
            cout<<"Enter the position : ";
            cin>>position;
            cout<<"Enter the data : ";
            cin>>data;
            insertpos(arr,n,position,data);
            break;

        case 3:
            deletbeg(arr,n);
            break;

        case 4:
            cout<<"Enter the position to delete the element : ";
            cin>>position;
            deletpos(arr,n,position);
            break;

        case 5:
            deletend(arr,n);
            break;
        
        case 6:
            print(arr,n);
            break;

        case 7:
            exit(0);
            
        default:
        cout<<"Invalid choice!";

    }   
}
    return 0;
}