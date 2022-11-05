#include <iostream>

using namespace std;

class point
{
    int x, y;

public:
    point(int, int);
    void print()
    {
        cout << "The point is in (" << x << "," << y << ")" << endl;
    }
};
point::point(int a, int b)
{
    x = a;
    y = b;
}
int main()
{
    // implicit call
    point p1(1, 24);
    p1.print();
    // explicit call
    point p2 = point(3, 4);
    p2.print();
    return 0;
}