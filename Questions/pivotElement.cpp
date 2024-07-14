//this program finds the pivot element in a sorted and rotated array. It uses concept of binary search and finds the pivot element in O(logn) time complexity.

#include <bits/stdc++.h>
using namespace std;

int getPivot(int arr[],int n){
    int s=0,e=n-1;
    int mid= s+(e-s)/2;
    while(s<e){
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid= s+(e-s)/2;
    }
    return s;
}

int main(){
    int arr[5]={3,8,10,17,1};
    cout<<"Pivot element is at index "<<getPivot(arr,5)<<"\n";
    return 0;
}