#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>& nums,int target){
    sort(nums.begin(),nums.end());
    int First = 0;
    int last =  nums.size()-1;
        
    while (First<=last){
        int mid=(First+last)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            First=mid-1;
        }        
        else if(nums[mid]>target){
            last=mid-1;
        }
    }
    return -1;
}

int main(){
vector<int> v {23,4,432,23,12,34,432,57,789,6768,889};
cout<<BinarySearch(v,456);
return 0;
}