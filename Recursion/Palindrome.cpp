#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int i,int j){

    if(i>j) return true;
    
    if(str[i]!=str[j])
        return false;
    else 
        return checkPalindrome(str,i+1,j-1);
}
int main()
{
    string s="navan";
    cout<<endl;
    bool isPalindrome = checkPalindrome(s,0,s.length()-1);
    if(isPalindrome) cout<<"It's a palindrome"<<endl;
    else cout<<"It is not a palindrome"<<endl;
    return 0;
}