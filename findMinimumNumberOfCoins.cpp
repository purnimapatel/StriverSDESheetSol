int findMinimumCoins(int amount) 
{
    // Write your code here
    int ans = 0;
    vector<int>changes = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    while(amount >0){
        for(int change : changes){
            if(amount>=change){
                amount = amount-change;
                break;
            }
        }
        ans++;
    }
    return ans;
}
