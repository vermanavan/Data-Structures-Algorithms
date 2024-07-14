#include <bits/stdc++.h>
using namespace std;

class Node{   
    public:
    int data;
    Node* next;
    
    Node(int d){
        this-> data=d;
        this->next=NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is freed of the data "<<value<<endl;
    }
};
void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp -> next=head;
    head = temp;
}
void print(Node* &head){
    Node* temp = head; 
    while (temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
bool checkPalindrome(vector<int> & arr){
    int n=arr.size();
    int s=0;
    int e=n-1;
    while(s<=e){
        if(arr[s]!= arr[e]) return false;
        s++;e--;
    }
    return true;
}

bool isPalindrome(Node* &head){
    vector<int>arr;
    Node* temp= head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    return checkPalindrome(arr);
}

int main()
{   
    Node* node1 = new Node(1);
    Node* head= node1;
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    print(head);
    if(isPalindrome(head))
        cout<<"List is a palindrome"<<endl;
    else 
        cout<<"List is not a palindrome"<<endl;
    return 0;
}