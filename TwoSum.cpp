#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.end());
    //Brute Force Approach with huge time complexity
    int sum;
    for (int i = 0; i < v.size(); ++i)
    {
        for (int j = i + 1; j < v.size(); ++j)
        {
            sum = v[i] + v[j];
            if (sum == k)
            {
                cout << v[i] << " " << v[j];
            }
        }
    }
    
 //Two Pointer Approach with less Time Complexity
    int lo=0;
    int hi = v.size() - 1;
    while(lo<hi)
    {
        int sum=v[lo]+v[hi];
        if(sum==k)
        {
            cout<<v[lo]<<" "<<v[hi];
        }
        if(sum>k)
        {
            hi--;
        }
        else
        {
            lo++;
        }
    }


    return 0;
}