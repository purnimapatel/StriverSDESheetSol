#include<bits/stdc++.h>
using namespace std;
string kthPermutation(int n, int k) {
    // Write your code here.
    vector<int>numbers;
    int factorial = 1;
    for(int i = 1; i<=n; i++){
        factorial = factorial*i;
        numbers.push_back(i);
    }
    factorial = factorial/n;
    string ans = "";
    k = k-1;
    while(true){
        ans +=  to_string(numbers[k/factorial]);
        numbers.erase(numbers.begin()+k/factorial);
        if(numbers.size()== 0){
            break;
        }
        k = k%factorial;
        factorial = factorial/numbers.size();
    }
    return ans;
}
