#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums,vector<int> output,int index,vector<vector<int>>& ans)
{
    if(index>= nums.size())
    {   
        ans.push_back(output);
        return;
    }
    solve(nums, output, index+1,ans);
    int element = nums[index];
    output.push_back(element);
    solve(nums,output,index+1,ans);
}
vector<vector<int>> Subsetss(vector<int>& nums)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index=0;
    solve(nums,output,index,ans);
    return ans;
}
int main()
{
    vector<int> v{1,2,3,4,5};
    vector<vector<int>>z=Subsetss(v);
    for(const auto & row:z){
        for(const int& value:row){
            cout<<value<<" ";
        }           
        cout<<endl;
    }       
    return 0;
}