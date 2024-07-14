#include <bits/stdc++.h>
using namespace std;

void sortarray(int *arr,int n){
    if(n==0 || n==1) return;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
    }
    sortarray(arr,n-1);
}

int main()
{
    int arr[5]={2,4,1,5,7};
    sortarray(arr,5);
    for(auto a:arr)
        cout<<a<<" ";

    return 0;
}