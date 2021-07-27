#include<iostream>
using namespace std;

int linear(int arr[],int size,int element){
    for (int i = 0; i < size; i++)
    {
        if ( arr[i]==element){
            cout<<"the searched element is found at index "<<i;
        }
      
            
    }
    
    return -1;
}

int main() {
    int arr[]={34,5,32,7,8,54,45,69,21};
    int size= sizeof(arr)/sizeof(int);
    int element= 45;
    linear(arr, size, element);
   
}