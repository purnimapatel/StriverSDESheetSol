#include <bits/stdc++.h> 
using namespace std;


void findUniqSubs(int idx, vector<int>&arr, 
vector<int>&temp, vector<vector<int>>&res){
    res.push_back(temp);
    for(int i = idx; i<arr.size(); i++){
        if(i!=idx && arr[i]==arr[i-1]){
            continue;
        }
        temp.push_back(arr[i]);
        findUniqSubs(i+1, arr,temp, res);
        temp.pop_back();
    }

}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    vector<int>temp;
    vector<vector<int>>res;
    sort(arr.begin(), arr.end());
    findUniqSubs(0,arr,temp,res);
    return res;
}
