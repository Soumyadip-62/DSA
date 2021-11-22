#include <iostream>
using namespace std;
//check if the area of the rectangle is greater than it's perimeter
void rectangle(int len, int wid)
{
    int area = len * wid;
    int peri = (len + wid) * 2;

    if (area > peri)
    {
        cout << "The area of this Recatangle is greater tham it's perimeter" << endl;
        /* code */
    }
    else
    {
        cout << "The area of this Recatangle is NOT greater tham it's perimeter";
    }
}
int main()
{
    int len, wid;
    cout << "Enter Length:" << endl;
    cin >> len;
    cout << "Enter Width:" << endl;
    cin >> wid;
    rectangle(len, wid);
    return 0;
}