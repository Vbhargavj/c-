//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User Function Template for C++ solution

class Solution
{
public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n)
    {
        // Your code here
        // here n is size of the array
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            flag = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] < arr[j])
                {
                    arr[i] = arr[j];
                    i = n;
                }
            }
            if (flag == 0)
            {
                arr[i] = -1;
                cout << -1 << endl;
            }
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        Solution ob;

        vector<long long> res = ob.nextLargerElement(arr, n);
        cout << n << endl;
        for (long long i : res)
            cout << "i am calling";
            // cout << i << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends