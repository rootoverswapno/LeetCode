#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution
{
    public:
    double findMedianSortedArrays(vector<int>nums1,vector<int>nums2)
    {

       int n1=nums1.size();
       int n2=nums2.size();
       vector<int>v(n1+n2,0);
       int i=0;
       int j=0;  
       int last_index=0;
       while(i<n1&&j<n2)
       {
           if(nums1[i]<=nums2[j])
           {
               v[last_index++]=nums1[i++];
           }
           else
           {
            v[last_index++]=nums2[j++];
           }
       }
       while(i<n1)
       {
        v[last_index++]=nums1[i++];
       }
       while(j<n2)
       {
        v[last_index++]=nums2[j++];
       }
       int n=n1+n2;
       return n%2?v[n/2]:(v[n/2]+v[n/2-1])/2.0;
       
    }
    
};
int main()
{
    Solution solution;
    int n1, n2;
    cin >> n1;
    vector<int> nums1(n1);
    for (auto &i : nums1)
    {
        cin >> i;
    }
    cin>>n2;
    vector<int> nums2(n2);
    for (auto &j : nums2)
    {
        cin >> j;
    }
   double median=solution.findMedianSortedArrays(nums1,nums2);
   cout<<median<<endl;
    return 0;
}