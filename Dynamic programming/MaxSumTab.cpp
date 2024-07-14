#include <iostream>
#include <vector>

using namespace std;

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

int Now(vector<int>& nums){
    return solveTab(nums);
}
int main()
{
    vector<int> num = {1,2, 3, 1, 3, 5, 8, 1, 9};
    cout<<Now(num);

    return 0;
}
