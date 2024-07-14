#include <iostream>
using namespace std;
 void ReverseCounting(int n)
 {
    if(n==0) return;
    ReverseCounting(n-1);
    cout<<n<<endl;
 }
void counting(int n)
 {
    if(n==0) return;
    cout<<n<<endl;
    counting(n-1);
 }
int main()
{
    counting(10);
    ReverseCounting(10);
return 0;
}