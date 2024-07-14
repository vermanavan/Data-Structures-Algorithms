#include <bits/stdc++.h>
using namespace std;

 int SquareRoot(long long int m){
    int s=0,e=m;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        long long int sq=mid*mid;
        if(sq==m)
            return mid;
        if(sq<m){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double morePrecision(int n,int precision, int tempsol){
    double factor =1;
    double ans= tempsol;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int tempsol= SquareRoot(n);
    cout<<"Answer is "<< morePrecision(n,3,tempsol);

   
    return 0;
}