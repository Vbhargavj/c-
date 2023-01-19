//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int binarysearch(int arr[], int n, int k)
    {
        // code here
        int low = 0, high = n - 1, mid = (low + high + 1) / 2;
        while (low <= high)
        {
            cout << "i am calling" << endl;
            mid = low + (high - low) / 2;
            if (arr[mid] == k)
            {
                cout << mid + 1 << endl;
            }
            else if (arr[mid] < k)
            {
                mid = low + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        // cout<<-1<<endl;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}