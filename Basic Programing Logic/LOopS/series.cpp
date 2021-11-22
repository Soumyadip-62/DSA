#include <iostream>
using namespace std;

int main()
{
    int add;
    int sum = 0;
    int f = 1;
    for (int i = 1; i <= 7; i++)
    {
        for (int n = 1; n < i; n++)
        {
            cout << "i:" << i << endl;
            cout << "n:" << n << endl;
            f = f * n;
            //cout << add << endl;
        }
        cout << f << endl;
        // add = f / i;
        sum = sum + f;
    }
    cout << "The sum is:" << sum;
    return 0;
}