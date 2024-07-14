#include <bits/stdc++.h>
using namespace std;

void MERGE(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }  
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr2[k++]=arr2[j++];
    }
}
            
            
        
        


int main()
{
    int  first[5] ={4,5,8,10,14};
    int second[6]= {2,3,6,9,12,16};
    int arr3[11]={};
    MERGE(first,5,second,6,arr3);
    for(int i=0;i<11;i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}