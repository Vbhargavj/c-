#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int ltotal = 0;
        int ftotal = accumulate(nums.begin(), nums.end(), 0);
        for (int i = 0; i < nums.size(); i++)
        {
            ltotal += nums[i];  
            cout << "ftotal = " << ftotal << endl;
            cout << "ltotal = " << ltotal << endl
                 << endl;

            if (ltotal == ftotal)
            {
                cout << i << endl;
                break;
            }
            ftotal = ftotal - nums[i];
        }
    }
};

int main()
{
    Solution s1;
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(7);
    arr.push_back(3);
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(1);
    s1.pivotIndex(arr);
    return 0;
}