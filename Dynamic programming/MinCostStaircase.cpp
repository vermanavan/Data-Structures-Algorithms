#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int>& cost,int n,vector<int>& dp){
    if(n<=1) return cost[n];
    if(dp[n]!=-1) return dp[n];
    dp[n]= cost[n] + min(solve(cost,n-1,dp),solve(cost,n-2,dp));
    return dp[n];
}
int Var2(vector<int>& cost,int n){
    int prev2 = cost[0];
    int prev1 = cost[1];
    for(int i = 2;i<n;i++){
        int curr = cost[i] + min(prev1,prev2);
        prev2 = prev1;
        prev1 = curr;
    }
    return min(prev1,prev2);

}
int MinCostStaircase(vector<int>& cost){
    int n = cost.size();
    vector<int> dp(n+1,-1);
    // int ans = min(solve(cost,n-1,dp),solve(cost,n-2,dp));
    int ans = Var2(cost,n);
    return ans;
}

int main(){
    vector<int> cost = {1,100,1,1,1,100,1,1,100,1};
    cout<<"Minimum cost to reach the top of the staircase is "<<MinCostStaircase(cost)<<endl;
    return 0;
}