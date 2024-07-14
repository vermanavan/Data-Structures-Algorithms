#include <iostream>
using namespace std;

bool Search(int *arr,int siz,int key)
{
    if(siz==-1) return false;
    if(arr[siz]==key)
    {
        return true;
    }
    else
    {
        Search(arr,siz-1,key);
    }
}

int main()
{
    int arr[5]={6,4,8,9,4};
    int siz=sizeof(arr)/sizeof(arr[0])-1;
   if(Search(arr,siz,10))  
        cout<<"Present";
   else 
        cout<<"Not present";
    return 0;
}