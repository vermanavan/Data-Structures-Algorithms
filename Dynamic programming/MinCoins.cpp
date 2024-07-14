#include <iostream>
#include <vector>
using namespace std;

#define INT_MAX 1000000000

int solve(vector<int>&coins,int x){
    if(x==0) return 0;
    if(x<0) return INT_MAX;
    int mini = INT_MAX;
    for(int i=0;i<coins.size();i++){
        int ans = solve(coins,x-coins[i]);
        if(ans!=INT_MAX) mini = min(mini,ans+1);
    }
    return mini;
}

int minCoins(vector<int>& coins,int target){
    int ans= solve(coins,target);
    return ans==INT_MAX?-1:ans;
}

int main(){
    vector<int> coins = {1,2,5,11};
    int target = 20;
    cout<<minCoins(coins,target)<<endl;
    return 0;
}