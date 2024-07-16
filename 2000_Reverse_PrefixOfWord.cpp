#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reversePrefix(string &s, char ch) {
        int n=s.size();
        int lo=0;
        int hi=n-1;
        while(lo<=hi)
        {
            if(s[lo]==ch)
            {
                int l=hi-lo;
                reverse(s.begin(),s.end()-l);
            }
            else
            {
                lo++;
            }
        }
        return s;
        
    }
};
int main()
{
    Solution sol;
    string str;
    cin >> str;
    char c;
    cin >> c;
    string ss = sol.reversePrefix(str, c);
    cout << ss << endl;



    return 0;
}