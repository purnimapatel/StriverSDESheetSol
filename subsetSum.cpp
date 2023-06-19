#include <bits/stdc++.h> 
void subsetSumHelper(vector<int>&v,vector<int>&num, int n, int i, int sum){
    if(i> n-1){
        return;
    }
    subsetSumHelper(v, num,n, i+1,sum);
    sum+=num[i];
    v.push_back(sum);
    subsetSumHelper(v, num,n, i+1,sum);
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    int n = num.size();
    vector<int>v;
    if(n == 0)return v;
    v.push_back(0);
    subsetSumHelper(v,num,n,0,0);
    sort(v.begin(),v.end());
    return v;
}
