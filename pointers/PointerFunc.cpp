#include <iostream>
using namespace std;

void print(int *p)
{
    cout<<*p<<endl;
}
void update(int *p)
{
    *p+=2;
    cout<<*p<<endl;
}
int getSum(int arr[],int n)
{
    int sum=0;
    for(int a=0;a<n;a++)
        sum+=arr[a];
    return sum;   
}
int main()
{
    int value=5;
    int arr[5]={1,2,3,4,5};
    int *x = &arr[0];
    int *z = &value;
    print(z);
    update(z);
    getSum(x,5);
    return 0;
}