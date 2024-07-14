#include <bits/stdc++.h>
using namespace std;

long long  CustomPower(int a,int b){

    if(a==1) return 1;
    if(b==0) return 1;
    long long ans = a*CustomPower(a,b-1);
    return ans;
}
int main()
{
    int base =1,power=8;
    int expo = CustomPower(base,power); 
    cout<<expo<<endl;
    return 0;
}