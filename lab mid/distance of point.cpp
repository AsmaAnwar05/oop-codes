#include <iostream>
#include <cmath>   // for sqrt, pow
using namespace std;

class Point2D {
    double x, y;

public:
    // Parameterized constructor
    Point2D(double x, double y) {
        this->x = x;
        this->y = y;
    }

    // Show coordinates
    void show() {
        cout << "(" << this->x << ", " << this->y << ")" << endl;
    }

    // Declare friend function
    friend double calculateDistance(Point2D p1, Point2D p2);
};

// Friend function definition
double calculateDistance(Point2D p1, Point2D p2) {
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return sqrt(pow(dx, 2) + pow(dy, 2));  // distance formula
}

int main() {
    // Create two points
    Point2D p1(2.0, 3.0);
    Point2D p2(7.0, 8.0);

    cout << "Point 1: ";
    p1.show();

    cout << "Point 2: ";
    p2.show();

    // Calculate and print distance
    double dist = calculateDistance(p1, p2);
    cout << "Distance between points: " << dist << endl;

    return 0;
}
