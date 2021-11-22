#include <iostream>
using namespace std;
// claculates the sum of digit:
void sumofdigit(int a)
{
    int r;
    int sum = 0;
    while (a != 0)
    {
        r = a % 10;
        sum = sum + r;
        a = a / 10;
    }
    cout << "......The sum of the digits :" << sum << ".......";
}
int main()
{
    int val;
    cout << ".....Enter the number : ......";
    cin >> val;
    sumofdigit(val);
    return 0;
}