#include <iostream>
#include <ostream>
using namespace std;

int rotateArr(int arr[], int n, int d){
    int sz=n-d;
    int arr1[sz];
    for (int i = n-1; i>d; i-- ){
        for(int j =0; j<=sz; j++){
            arr1[j]=arr[i];
        }arr[i]=arr[i-1];
    }
    for(int i=0;i<d;i++){
         for(int j =0; j<=sz; j++){
        arr[i]=arr1[j];
    }}
    
   
    for (int i=0; i<6; i++){
   cout << arr[i];
    
}
    

}
int main() {
	//code
int	arr[] = {1,2,3,4,5,6};
rotateArr(arr,6,2);
 
	return 0;
}
