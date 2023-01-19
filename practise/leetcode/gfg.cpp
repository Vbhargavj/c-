//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{

public:
    void joint(vector<long long> &pre, int l, int m, int h, long long &inv)
    {
        int x = l, y = m + 1, k = 0;
        vector<long long> temp(h - l + 1);

        while (x <= m and y <= h)
        {
            if (pre[x] <= pre[y])
                temp[k++] = pre[x++];
            else
            {
                inv += (m - x + 1);
                temp[k++] = pre[y++];
            }
        }

        while (x <= m)
            temp[k++] = pre[x++];

        while (y <= h)
            temp[k++] = pre[y++];

        k = 0;
        for (int c = l; c <= h; c++)
            pre[c] = temp[k++];
    }

    void msort(vector<long long> &pre, int l, int h, long long &inv)
    {
        if (l < h)
        {
            int mid = (l + h) >> 1;
            msort(pre, l, mid, inv);
            msort(pre, mid + 1, h, inv);
            joint(pre, l, mid, h, inv);
        }
    }

    long long ins(vector<long long> &pre)
    {
        int n = pre.size();
        long long inv = 0;

        msort(pre, 0, n - 1, inv);

        return inv;
    }

    long long countSubstring(string s)
    {
        int n = s.size();

        vector<int> nums(n);
        for (int x = 0; x < n; x++)
        {
            nums[x] = s[x] - '0';
            if (nums[x] == 0)
                nums[x] = -1;
        }

        vector<long long> pre_sum(n);
        long long sum = 0;
        for (int x = 0; x < n; x++)
        {
            sum += nums[x];
            pre_sum[x] = sum;
        }

        long long count = 0; // to store valid substrings;
        for (int x = 0; x < n; x++)
        {
            if (pre_sum[x] > 0)
                count++;
        }

        reverse(pre_sum.begin(), pre_sum.end());

        return count + ins(pre_sum);
    }
};

//{ Driver Code Starts.
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    for (int x = 1; x <= t; x++)
    {
        string S;
        cin >> S;
        Solution obj;
        long long ans = obj.countSubstring(S);
        cout << ans << endl;
    }
}
// } Driver Code Ends