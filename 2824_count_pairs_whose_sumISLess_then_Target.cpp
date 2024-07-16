#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int CountPairs(vector<int> &v, int t)
    {
        int n = v.size();
        int lo = 0;
        int hi = n - 1;
        int ct = 0;
        sort(v.begin(), v.end());
        
        while (lo < hi)
        {
            if (v[lo] + v[hi] < t)
            {
                ct += (hi - lo);
                lo++;
            }
            else
            {
                hi--;
            }
        }
        return ct;
    }
};
int main()
{
    solution s;
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    int target;
    cin >> target;
    int tt = s.CountPairs(v, target);
    cout << tt << endl;

    return 0;
}