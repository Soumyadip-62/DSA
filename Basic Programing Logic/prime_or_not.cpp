#include <iostream>
using namespace std;

//find if the given no is prime or not :
void ifprime(int n)
{
    int f = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << "Nope This is not a prime number";
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        cout << "Yes this is a prime number";
    }
}
int main()
{
    int n;

    cout << "enter the nunmber: " << endl;
    cin >> n;
    ifprime(n);
    return 0;
}