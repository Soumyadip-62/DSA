#include <iostream>
using namespace std;

int binary(int arr[], int size, int element) {
    int low, mid, high;
    low= 0;
    high= size - 1;

    while (low<=high)
    {
        mid = (low+high)/2;
        if (arr[mid]== element){
            return mid;
        }
        if (arr[mid]<element){
            low= mid+1;
        }
        else{
            high= mid-1;
        }

    }
    return -1;
    
}
    
   

int main()
{
    int arr[] = {34, 45, 52, 67, 78, 84, 95, 99, 121};
    int size = sizeof(arr) / sizeof(int);
    int element = 99;
   int index =  binary(arr, size, element);
   cout<<"The element was found at _ "<< index;
}
