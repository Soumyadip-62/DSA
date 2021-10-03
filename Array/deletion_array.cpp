#include <iostream>
using namespace std;
//Traversal
void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}
//deletion in an array
void deletion(int arr[], int size, int index)
{
    // if (size >= capacity)
    // {
    //     cout << "The element can't be deleteted, the array is full";
    // }
    // else
    // {
        for (int i = index; i < size-1; i++)
        {
            arr[i] = arr[i+1];
        }
        //arr[index] = element;
    // }
}
int main()
{
    int arr[50] = {1, 5, 7, 9};
    display(arr, 4);
    int size = 4;
    int index;
    cout<<"Select which index you want to delete  ";
    cin>>index;
    deletion(arr, size, index);
    size = size -1;
    display(arr, size);
}
