#include <iostream>
using namespace std;

string Sorted(int arr[],int siz)
{
    if(siz==0) return "Sorted";
    if(arr[siz]>=arr[siz-1])
        return Sorted(arr,siz-1);
    else 
        return "Unsorted";
}
int main()
{
    int arr[]={12,23,41,46,56,56,81};
    int siz =sizeof(arr)/sizeof(arr[0])-1;
    cout<<Sorted(arr,siz);
    
    return 0;
}