#include <iostream>
#include <vector>
using namespace std;

int solve(int n,vector<int> &dp){
        //base case
        if(n<=2)
          return n;
        
        if(dp[n]!=-1) 
          return dp[n]; 
        
        dp[n]=solve(n-1,dp)+solve(n-2,dp);
        return dp[n];
    }
    int climbStairs(int n) {
        if(n<=2)
           return n;
        vector<int> dp(n+1);
        for(int i=0;i<=n;i++)
           dp[i]=-1;
        return solve(n,dp);
    }

int main(){
    cout<<"number of ways to climb 10 stairs is "<<climbStairs(10)<<endl;
    return 0;
}