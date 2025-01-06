#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// Define a struct to represent a point
struct Point {
    int x, y;

    // Constructor to initialize point coordinates
    Point(int x_val, int y_val) : x(x_val), y(y_val) {}

    // Function to calculate the squared distance from a point to P (0, 0)
    int distanceTo(int px, int py) const {
        return (x - px) * (x - px) + (y - py) * (y - py);
    }
};

int main() {
    // Read the reference point P
    int px, py;
    cin >> px >> py;

    // Read the number of points
    int n;
    cin >> n;

    vector<Point> points;

    // Read the points and store them in a vector
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points.push_back(Point(x, y));
    }

    // Sort the points based on their distance to point P
    sort(points.begin(), points.end(), [&px, &py](const Point &a, const Point &b) {
        return a.distanceTo(px, py) < b.distanceTo(px, py);
    });

    // Print the sorted points
    for (const auto &point : points) {
        cout << point.x << " " << point.y << endl;
    }

    return 0;
}
