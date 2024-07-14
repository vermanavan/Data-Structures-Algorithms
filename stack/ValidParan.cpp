#include <iostream>
#include <stack> 
using namespace std;
bool validParanthesis(string exp)
{
    stack <char> s;
    for (int i=0;i<exp.length();i++){
        char ch = exp[i];
        if(ch=='('|| ch=='{'|| ch=='['){
            s.push(ch);
        }
        else{
            if(!s.empty()){
                char top=s.top();
                if( (ch==')' && top== '(')||
                (ch=='}' && top== '{')||
                (ch==']' && top== '[')){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(!s.empty())
        return true;
    else
        return false;    
}
            
int main(){
    string s;
    cout<<"enter a string";
    cin>>s;

    if(validParanthesis(s)){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Un-Balanced"<<endl;
    }

    return 0;
}
        
        
