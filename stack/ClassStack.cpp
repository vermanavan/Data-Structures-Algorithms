#include <iostream>
using namespace std;

class stack
{
    public:
    int *arr;
    int top;
    int size;

    stack(int size){
        this->size =size;
        arr= new int [size];
        top=-1;
    }
    void push(int element){
        if(size-top>1){
         top++;
         arr[top]=element;   
        }
        else{
            cout<<"Stack if full and is overflowing"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
            
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if (top==-1){
            return true;
        }
        else{
            return false;
        }
    
    }
};
int main(){
    stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);
    
    cout<<"top element is "<<st.peek()<<endl;
    st.pop();
    cout<<"top element is "<<st.peek()<<endl;
    st.pop();
    cout<<"top element is "<<st.peek()<<endl;
    st.pop();
    cout<<"top element is "<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }


    return 0;
}