/*You are required to implement a class, Point2D. The Point2D class
contains private members x and y to represent the coordinates of a point.
 Implement a parameterized constructor to initialize these values. There is a
 global function calculateDistance(), which takes two Point2D objects as
 parameters and is declared as a friend of the Point2D class, allowing it to
 access the private members x and y. The calculateDistance() function
 calculates the distance between two points in a 2D coordinate system. In
 the main function, create two Point2D objects, display their coordinates,
 and use the calculateDistance() function to compute and output the
 distance between the two points.*/
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
