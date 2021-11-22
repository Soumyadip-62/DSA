#include <iostream>
using namespace std;

//check if a given number is armstrong no or not
void Armstrong(int a)
{
    int r;
    int temp = a;
    int sum = 0;
    while (a != 0)
    {
        r = temp % 10;
        sum = sum + (r * r * r);
        temp = a / 10;
    }
    if (temp == sum)
    {
        cout << "The no is Armstrong No.";
    }
    else
    {
        cout << "The no is not an Armstrong No.";
    }
}

int main()
{
    int arm;
    cout << "Enter the number:" << endl;
    cin >> arm;
    Armstrong(arm);
    return 0;
}