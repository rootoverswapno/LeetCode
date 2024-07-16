#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }

    bool ok = false;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); ++i)
    {
        int lo, hi;
        lo = i + 1;
        hi = v.size() - 1;
        while (lo < hi)
        {
            int s = v[i] + v[lo] + v[hi];
            if (s == 0)
            {
                ok = true;
                cout << v[i] << " " << v[lo] << " " << v[hi];
            }
            if (s < 0)
            {
                lo++;
            }
            else
            {
                hi--;
            }
        }
    }

    return 0;
}