#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n; 
    int prev1=1,prev2=0;
    for(int i=2;i<=n;i++)
    {
        int curr= prev1+prev2;
        prev2=prev1;
        prev1=curr;
    }

    cout<<prev1<<endl;

    return 0;
}
    
    