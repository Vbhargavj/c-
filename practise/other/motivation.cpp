#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, a, n;
    cin >> t;
    while (t--)
    {
        cin >> n >> a;
        int r[n], s[n];

        for (int i = 0; i < n; i++)
        {
            cin >> s[i] >> r[i];
        }
        int temp;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (r[i] > r[j])
                {
                    temp = r[i];
                    r[i] = r[j];
                    r[j] = temp;

                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] <= a)
            {
                cout << r[i] << endl;
            }
            else{
                cout << "I am not ok\n";
            }
        }
    }

    return 0;
}
