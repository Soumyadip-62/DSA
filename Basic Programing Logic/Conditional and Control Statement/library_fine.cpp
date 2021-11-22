#include <iostream>
using namespace std;

//calculate what will be the fine amount by checking how late the book is returned
void calculatefine(int day)
{
    if (day <= 5)
    {
        cout << "The fine will be Rs.1";
    }
    else if (day >= 6 && day <= 10)
    {
        cout << "The fine will be Rs.2";
    }
    else if (day > 10 && day < 30)
    {
        cout << "The fine will be Rs.5";
    }
    else
    {
        cout << "your membership has been cancelled";
    }
}
int main()
{
    int day;
    cout << "How Late is the book returned?";
    cin >> day;
    calculatefine(day);
    return 0;
}