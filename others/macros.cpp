#include <iostream>
using namespace std;
# define PI 3.14
// # define min(a,b) (((a)<(b)) ? (a):(b))
int main()
{
    int r=5;
    int x=9;
    // double pi = 3.14;
    double area = PI*r*r;
    cout<<area<<endl;
    cout<<min(r,x);
    return 0;
}