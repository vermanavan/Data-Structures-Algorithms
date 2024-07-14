#include <iostream>
using namespace std;

int FirstOcc(int arr[], int n, int key){
    int s=0,e=n-1;
    int mid= s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid= s+(e-s)/2;
    }
    return ans;
}
int LastOcc(int arr[], int n, int key){
    int s=0,e=n-1;
    int mid= s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid= s+(e-s)/2;
    }
    return ans;
}
int main(){
    int even[11]={1,2,3,3,3,3,3,3,4,4,5};
    cout<<"First occurence of 3 is at index "<<FirstOcc(even,11,3)<<"\n";
    cout<<"Last occurence of 3 is at index "<<LastOcc(even,11,3)<<"\n";
    return 0;
}