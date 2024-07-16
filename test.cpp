#include<bits/stdc++.h>
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
    cin>>s;
    int hi=s.size();
    int lo=3;
    int pos=distance(s.begin(),s.end());
    cout<<pos<<endl;
    int l=hi-lo;
    reverse(s.begin(),s.end()-l+1);
    cout<<s<<endl;


    return 0;
}