#include <bits/stdc++.h>
using namespace std;

vector<int> Waveprint(vector<vector<int>> &v){
    vector<int> wave;
    for(int i=0;i<4;i++){
        if(i&1){
            for(int j=4-1;j>=0;j--){
                wave.push_back(v[i][j]);
            }
        }
        else{
            for(int j=0;j<4;j++){
                wave.push_back(v[i][j]);
            }
        }
    }
    return wave;
}

int main()
{
    vector<vector<int>> TwoD{{3,1,2,4},{6,5,1,7},{8,5,9,4},{4,7,3,1}};
    vector<int> ww= Waveprint(TwoD);
    for(auto a: ww)
        cout<<a<<" ";

    return 0;
}