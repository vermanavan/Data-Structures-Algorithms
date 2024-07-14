#include <iostream>
using namespace std;

int Arrsum(int *arr,int siz){   
    if(siz==0) return arr[0];
    return arr[siz]+Arrsum(arr,siz-1);}
int main()
{
int arr[]={4,54,74,98,65};
int siz=sizeof(arr)/sizeof(arr[0])-1;
cout<<Arrsum(arr,siz);
return 0;
}