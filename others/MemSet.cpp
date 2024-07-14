#include <bits/stdc++.h>
using namespace std;

int main()
{      
    char buffer[10];
    memset(buffer,'c',sizeof(char)*5);
    memset(buffer+5,'z',sizeof(char)*5);
    for(int i=0;i<10;i++)   
        cout<<buffer[i]<<" ";
    return 0;
}