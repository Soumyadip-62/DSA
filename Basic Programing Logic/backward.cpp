#include <iostream>
using namespace std;

//write a program that reads an integer and prints it backward :

void bckwrd(int a)
{
    int r;
    int arr[] = {};
    int rev = 0;
    while (a != 0)
    {

        r = a % 10;
        rev = rev * 10 + r;
        a /= 10;
        /* for (int i = 0; i < sizeof(a); i++)
        {
            
        }
        */
    }
    /* code */
    cout << "The reversed number is : " << rev;
}
int main()
{
    int val;
    cout << ".....Enter a number : ......";
    cin >> val;
    bckwrd(val);
    return 0;
}