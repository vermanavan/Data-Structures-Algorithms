#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    // vector <int> a;
    int a[1];
    int N,S,P,Q;
    cin>>N>>S>>P>>Q;
    a[0] = S % 2^31;
    // for (int i = 1 ;i= N-1;i++)
    //     a[i] = a[i-1]*P+Q % 2^31;
    
    // for(int i=0;i<a.size();i++)
    // {
    //     cout<<a[i];
    // }
      cout<<a[0];
    return 0;
}