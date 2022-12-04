#include <iostream>

using namespace std;

int main()
{
    int ary[] = {1, 2, 6, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << ary[i] << endl;
    }
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += ary[i];
    }
    cout << sum << endl;

    for (int i = 0; i < 4; i++)
    {
        if (ary[i] < ary[i + 1])
        {
            sum += ary[i];
        }
        else
        {
            sum += ary[i + 1];
        }
    }

    cout << sum << endl;
    return 0;
}