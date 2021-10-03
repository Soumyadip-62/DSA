#include <iostream>
using namespace std;

void calculateDay(int day, int month, int year)
{ //the month and the day array:
    int months[] = {0, 3, 3, 6, 1, 4, 6, 1, 4, 6, 2, 4};
    int days[] = {0,
                  1,
                  2,
                  3,
                  4,
                  5,
                  6};
    // char days[] = {'Sun', 'Mon', 'Tues', 'Wednes', 'Fri', 'Satur'};
    //calculating leap year and total odd days:
    int leap = (year - 1) / 4;
    int oddDay = (year + leap) % 7;
    //claculating odd days from remaining days:
    int i = 0;
    while (i < month - 1)
    {
        i++;
    }
    if (year % 4 != 0)
    {
        oddDay = (oddDay + months[i - 1] + day) % 7;
    }

    //calculating the day:
    /* int j = 0;
    while (j <= oddDay)
    {
        j++;
    }*/
    cout << "The day of the given date is :" << oddDay;
}
int main()
{
    //defining variables:
    int day, month, year;
    //taking input from the user:
    cout << "What day? \n";
    cin >> day;
    cout << "What month? \n";
    cin >> month;
    cout << "What year? \n";
    cin >> year;
    calculateDay(day, month, year);
    return 0;
}