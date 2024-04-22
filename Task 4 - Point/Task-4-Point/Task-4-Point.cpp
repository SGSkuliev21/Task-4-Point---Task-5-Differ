#include <iostream>
using namespace std;

class Point 
{
private:
    int x, y, z;

public:
    Point(int x = 0, int y = 0, int z = 0) : x(x), y(y), z(z) {}

    Point(const Point& other) {
        this->x = other.x + 1;
        this->y = other.y + 2;
        this->z = other.z + 3;
    }

    int getX() const { return x; }
    int getY() const { return y; }
    int getZ() const { return z; }

    void setX(int newX) { x = newX; }
    void setY(int newY) { y = newY; }
    void setZ(int newZ) { z = newZ; }

    void print() const {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main() {
    Point p1;
    Point p2(1, 2, 3);

    cout << "p1: ";
    p1.print();

    cout << "p2: ";
    p2.print();

    Point p3 = p2;

    cout << "p3 (copy of p2 with offset): ";
    p3.print();

    p1.setX(10);
    p1.setY(20);
    p1.setZ(30);

    cout << "p1 (after mutation): ";
    p1.print();
}
