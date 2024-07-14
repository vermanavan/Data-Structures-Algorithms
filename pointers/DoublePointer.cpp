#include <iostream>
using namespace std;

int main()
{
    int i=5;
    int *ptr1=&i;
    int **ptr2=&ptr1;

    cout<<i<<endl;          //value of i
    cout<<ptr1<<endl;       //address of i
    cout<<*ptr1<<endl;      //value of i
    cout<<&ptr1<<endl;      //address of ptr1
    cout<<ptr2<<endl;       //address of ptr2
    cout<<*ptr2<<endl;      //address of ptr1 or value in ptr2
    cout<<**ptr2<<endl;     //value of i
    return 0;
}