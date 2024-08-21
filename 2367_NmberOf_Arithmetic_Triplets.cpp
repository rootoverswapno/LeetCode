#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int arithmeticTriplets(vector<int> &v, int diff)
    {
        int n = v.size();
        int ct = 0;
        for (int i = 0; i < n - 2; ++i)
        {
            int lo = i + 1;
            int hi = n - 1;
            while (lo < hi)
            {

                if ((v[lo] - v[i]) == diff && (v[hi] - v[lo]) == diff)
                {
                    ct++;
                   
                }
                if (v[lo] - v[i] < diff && v[hi] - v[lo] < diff)
                {
                    lo++;
                }
                else
                {
                    hi--;
                }
            }
        }

        return ct;
    }
};
int main()
{

    Solution s;
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    int diff;
    cin >> diff;
    int t = s.arithmeticTriplets(v, diff);
    cout << t << endl;

    return 0;
}