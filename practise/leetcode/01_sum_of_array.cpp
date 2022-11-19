#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> g1, g2;

    for (int i = 0; i < 10; i++)
    {
        g1.push_back(i);
    }
    for (auto i = g1.begin(); i != g1.end(); i++)
    {
        cout << *i << endl;
    }
    auto k = g1.begin();
    int sum = 0;
    for (auto i = g1.begin(); i < g1.end(); i++)
    {
        sum += *i;
        g2.push_back(sum);
    }
    for (auto i = g2.begin(); i != g2.end(); i++)
    {
        cout << *i << endl;
    }
    g1 = g2;
    cout << endl;
    for (auto i = g1.begin(); i != g1.end(); i++)
    {
        cout << *i << endl;
    }

    return 0;
}
