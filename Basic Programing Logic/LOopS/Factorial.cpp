#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int f = 1;
    for (int i = 1; i <= a; i++)
    {
        f = f * i;
    }
    cout << f;
    return 0;
}