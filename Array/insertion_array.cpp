#include<iostream>
using namespace std;
    //Traversal 
void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }    
    cout<<endl;
}
//insertion in an array
void insert(int arr[], int size,int element, int capacity, int index){
        if (size>= capacity){
            cout<<"The element can't be inserted, the array is full";
        }
        else{
            for (int i = size -1; i >= index; i--)
            {
                arr[i+1] = arr[i];
            }
            arr[index]=element;
        }
}
int main(){
    int arr[50]={1,5,7,9};
    display(arr,4);
    int size = 5; int element = 6; int index = 2;
    insert(arr,size,element,50,index);
    display(arr,5);
}


