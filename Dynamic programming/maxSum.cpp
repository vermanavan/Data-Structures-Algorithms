#include <iostream>
#include <vector>
using namespace std;


//this is recursion 
// int solve(vector<int>&nums, int n){
//     if(n < 0) return 0;
//     if(n == 0) return nums[0];

//     int inc = solve(nums,n-2)+nums[n];
//     int exc = solve(nums,n-1)+0;

//     return max(inc,exc);

// }

// this is recusrsion and memoisation
// int solveMem(vector<int>&nums,int n,vector<int>&dp){

//     if(n < 0) return 0;
//     if(n == 0) return nums[0];
//     if(dp[n]!=-1) return dp[n];

//     int inc = solveMem(nums,n-2,dp)+nums[n];
//     int exc = solveMem(nums,n-1,dp)+0;

//     dp[n]=max(inc,exc);
//     return dp[n];

// }

int solveTab(vector<int>&nums){

        int n = nums.size();
        vector<int> dp(n,0);
        dp[0]=nums[0];
        for(int i=1;i<n;i++){
            int inc = dp[i-2]+ nums[i];
            int exc = dp[i-1]+ 0;
            dp[i]=max(inc,exc); 
        }
        return dp[n-1];
}

int maxNonAdjSum(vector<int>&nums){
    // int n= nums.size();
    // // int ans = solve(nums,n-1);
    // // return ans;
    // vector<int> dp(n,-1);
    // return solveMem(nums,n-1,dp);
    return solveTab(nums);

}
int main(){

    vector<int> nums {1,2, 3, 1, 3, 5, 8, 1, 9};
    cout<<maxNonAdjSum(nums);

    return 0;
}