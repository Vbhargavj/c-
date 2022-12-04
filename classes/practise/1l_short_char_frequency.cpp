/*

tree ==>eert or eetr
baca ==> aabc or aacb
*/








#include <iostream>

#include <cstring>
// #include <iostream>

using namespace std;

class Solution
{
public:
    string frequencySort(string s)
    {
        int n = s.length();
        char cy[n + 1];

        strcpy(cy, s.c_str());
        // for (int i = 0; i < s.length(); i++)
        // {
        //     for (int j = 0; j < s.length(); j++)
        //     {
        //         if (s[i] == cy[j])
        //         {
        //         }
        //     }
        // }
        char temp = '\n';
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (cy[i] > cy[j])
                {
                    temp = cy[i];
                    cy[i] = cy[j];
                    cy[j] = temp;
                }
            }
        }
        int count = 0,sum=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (cy[i] == cy[j])
                {
                    count++;
                }
                if()
                
            }
        }

        int i = 0;
        cout << cy[i++] << endl;
        cout << cy[i++] << endl;
        cout << cy[i++] << endl;
        cout << cy[i++] << endl;
        cout << cy[i++] << endl;
        cout << cy[i++] << endl;
        cout << cy[i++] << endl;
    }
};

int main()
{
    Solution s1;
    s1.frequencySort("Bhargav");
    return 0;
}