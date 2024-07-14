#include <iostream>
#include <vector>
using namespace std;

long long int solve(vector<int>nums){
    long long int n = nums.size();
    long long int prev2=0;
    long long int prev1=nums[0];

    for(int i=1;i<n;i++){
        long long int inc = prev2+nums[i];
        long long int exc = prev1+0;
        long long int ans= max(inc,exc);
        prev2=prev1;
        prev1=ans;
    }
    return prev1;
}
long long int houseRobbery(vector<int>&values){
    int n = values.size();
    if (n==1) return values[0];
    vector<int>first,second;
    for(int i=0;i<n;i++){
        if(i!=n-1){
            first.push_back(values[i]);
        }
        if(i!=0){
            second.push_back(values[i]);
        }
    }
    return max(solve(first),solve(second));
}
int main(){
    vector<int> arr{4,1,6,10};
    cout<<houseRobbery(arr);
    return 0;
}