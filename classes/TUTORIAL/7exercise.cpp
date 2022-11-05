// find the distance btw the two points
#include <iostream>
#include <math.h>

using namespace std;

class data;

class dist
{
public:
    float dis(data, data);
};

class data
{
private:
    int x, y;
    friend dist;

public:
    data(int, int);
    // int distance(data, data);
};

data::data(int a, int b)
{
    x = a;
    y = b;
}

float dist::dis(data d1, data d2)
{
    float res;
    res = sqrt(pow((d1.x - d2.x), 2) + pow((d1.y - d2.y), 2));
    return res;
}
int main()
{
    data a1(43, 34), a2(1, 1);
    dist sum;
    float res = sum.dis(a1, a2);
    cout << res << endl;
    return 0;
}