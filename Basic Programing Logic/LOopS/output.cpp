#include <iostream>
using namespace std;
// print the following output :
/* 1
  121
 12321
1234321  */
int main()
{
    int j;
    for (int i = 1; i < 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int k = j; k >= 1; k--)

        {

            cout << k;
        }

        cout << endl;
    }

    return 0;
}