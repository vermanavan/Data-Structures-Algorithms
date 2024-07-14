#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][4]={{3,1,4,5},{6,8,3,7},{9,3,1,6}};
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
            
        }
        cout<<"Sum of the row is :"<<sum<<endl;

    }
    return 0;
}