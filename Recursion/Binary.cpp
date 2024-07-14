#include <bits/stdc++.h>
using namespace std;

bool BinaryRecursion(int *arr,int s,int e,int key){
    if(s>e) return false;
    int mid =s+(e-s)/2;
    if(arr[mid]==key) return true;
    if(arr[mid]<key){
        return BinaryRecursion(arr,mid+1,e,key);
    }
    else 
        return BinaryRecursion(arr,s,mid-1,key);

}



int main()
{
    int arr[6]={2,4,6,10,14,18};
    int size=6;
    int key=18;
    cout<<"present or not "<<BinaryRecursion(arr,0,6,17);

    return 0;
}