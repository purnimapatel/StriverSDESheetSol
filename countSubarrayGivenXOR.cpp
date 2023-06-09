#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    map<int,int>mp;
    int count = 0;
    int Xor = 0;
    for(auto it : arr){
        Xor = Xor^it;
        if(Xor == x){
            count++;
        }
        if(mp.find(Xor^x)!=mp.end()){
            count+=mp[Xor^x];    
        }
        mp[Xor]+=1;
    }
    return count;
}
