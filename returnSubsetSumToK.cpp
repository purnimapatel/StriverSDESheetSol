void recFunc(vector<int> arr, int i, int n, int k, vector<vector<int>> &ans, vector<int>smallAns){
    if(n==0){
        if(k==0){
            ans.push_back(smallAns);
        }
        return;
    }
    //recursive call
    recFunc(arr, i+1, n-1, k,ans, smallAns);
    smallAns.push_back(arr[i]);
    recFunc(arr, i+1, n-1, k-arr[i],ans, smallAns);
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>> ans;
    vecor<int> smallAns;
    recFunc(arr,0,n,k,ans, smallAns);
    return ans;
}
