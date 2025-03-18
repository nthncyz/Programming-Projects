#include <iostream>
using namespace std;

const int SECONDS_PER_MINUTE = 60;
const int MINUTES_PER_HOUR = 60;
const int HOURS_PER_DAY = 24;

int main() {

    int seconds = DAYS * SECONDS_PER_MINUTE * MINUTES_PER_HOUR * HOURS_PER_DAY;
    int minutes = DAYS * MINUTES_PER_HOUR * HOURS_PER_DAY;
    int hours = DAYS * HOURS_PER_DAY;

    // Outputting the results
    cout << "The number of seconds in " << DAYS << " days is: " << seconds << endl;
    cout << "The number of minutes in " << DAYS << " days is: " << minutes << endl;
    cout << "The number of hours in " << DAYS << " days is: " << hours << endl;

    return 0;
}
