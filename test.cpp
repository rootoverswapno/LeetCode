#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    // vector<int>v(n);
    // for(auto &i:v)
    // {
    //     cin>>i;
    // }
    string s;
    cin >> s;
    int hi = s.size();
    int lo = 3;
    int pos = distance(s.begin(), s.end());
    cout << pos << endl;
    int l = hi - lo;
    reverse(s.begin(), s.end() - l + 1);
    cout << s << endl;
    /*
    class Solution {
    public:
        int arithmeticTriplets(vector<int>& nums, int diff) {

            int count =0;

            // JUST CONVERTING ARRAY TO SET
            set<int>s(nums.begin(),nums.end());

            for(int i=0;i<s.size();i++)
            {
                if(s.find(nums[i]-diff)!=s.end()  && s.find(nums[i]-2*diff)!=s.end())
                // SET .END HONE SE PEHLE (nums[i]-diff) YE VALUE SET MEIN MILI YA NAHI
                {
                    count++;
                }
            }
            return count;
        }
    };
    */
    

    return 0;
}