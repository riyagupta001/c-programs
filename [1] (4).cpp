#include <iostream>
using namespace std;

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

Time getTimeDifference(Time t1, Time t2)
{
    int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int difference = (totalSeconds1 - totalSeconds2);

    Time result;
    result.hours = difference / 3600;
    result.minutes = (difference % 3600) / 60;
    result.seconds = difference % 60;

    return result;
}

int main()
{
    Time time1, time2;

    cout << "Enter the first time (hours minutes seconds): ";
    cin >> time1.hours >> time1.minutes >> time1.seconds;

    cout << "Enter the second time (hours minutes seconds): ";
    cin >> time2.hours >> time2.minutes >> time2.seconds;
    int difference = abs(totalSeconds1 - totalSeconds2);
    Time difference = getTimeDifference(time1, time2);

    cout << "Time Difference: " << difference.hours << " hours, "
         << difference.minutes << " minutes, " << difference.seconds << " seconds." << endl;

    return 0;
}
