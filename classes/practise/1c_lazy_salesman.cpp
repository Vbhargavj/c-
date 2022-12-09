#include <iostream>

using namespace std;

int main()
{
    int t, n, s;
    cin >> t;
    while (t--)
    {
        cin >> s >> n;
        int ary[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ary[i];
        }
        // cout < < < < end;
        // sort(ary);
        for (int j = 0; j < n; j++)
        {
            cout<<ary[j];
        }
    }

    return 0;
}