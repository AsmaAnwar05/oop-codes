#include <iostream>
using namespace std;

class TIME {
    int hours, minutes, seconds;

public:
    // Default constructor
    TIME() {
        hours = minutes = seconds = 0;
    }

    // Parameterized constructor
    TIME(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
        normalize(); //use for as soon as the object is created, the time should always remain in a valid format.
    }

    // Normalize time (e.g., 70 seconds -> 1 minute 10 seconds)
    void normalize() {
        if (seconds >= 60) {
            minutes =minutes+ seconds / 60;
            seconds = seconds % 60;
        }
        if (minutes >= 60) {
            hours=hours+ minutes / 60;
            minutes = minutes % 60;
        }
    }

    // Function to display time
    void display() {
        cout << hours << "h " << minutes << "m " << seconds << "s" << endl;
    }

    // Convert to total seconds
    int toSeconds() {
        return hours * 3600 + minutes * 60 + seconds;
    }

    // Set from total seconds
    void toStandard(int total) {
        hours = total / 3600;
        total= total%3600;
        minutes = total / 60;
        seconds = total % 60;
    }

    // Friend declaration not needed (we'll use non-member function)
    friend TIME difference( TIME t1, TIME t2);
};

// Non-member function to calculate difference
TIME difference( TIME t1,  TIME t2) {
    int diffSec = t1.toSeconds() - t2.toSeconds();
    if (diffSec < 0) diffSec = -diffSec; // absolute value

    TIME result;
    result.toStandard(diffSec);
    return result;
}

int main() {
    TIME t1(2, 66, 50); // 2h 45m 50s
    TIME t2(1, 20, 15); // 1h 20m 15s

    cout << "Time 1: ";
    t1.display();
    cout << "Time 2: ";
    t2.display();

    TIME diff = difference(t1, t2);//pass object by value
    cout << "Difference: ";
    diff.display();

    return 0;
}
