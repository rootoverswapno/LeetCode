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
    for (int i = 0; i < v.size(); ++i)
    {
        for (int j = i + 1; j < v.size(); ++j)
        {
            for (int k = j + 1; k < v.size(); ++k)
            {
                if (v[i] + v[j] + v[k] == 0)
                {
                    ok = true;
                }
            }
        }
    }
    if (ok == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}