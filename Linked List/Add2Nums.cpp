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

Node* reverseLinkedList(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

void insertAtTail(Node* &head,Node* &tail,int digit){
    Node* temp=new Node(digit);
    if(head==NULL) {
        head=temp;
        tail=temp;
        return;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}

Node* add(Node*&first,Node* &second){
    int carry=0;
    Node* anshead=NULL;
    Node* anstail=NULL;
    while(first!=NULL && second!=NULL){
        int sum= carry+ first->data+second->data;
        int digit = sum%10;
        Node* temp=new Node(digit);
        insertAtTail(anshead,anstail,digit);
        carry=sum/10;
        first=first->next;
        second=second->next;
    }
    while(first!=NULL){        
        int sum= carry+first->data;
        int digit = sum%10;
        insertAtTail(anshead,anstail,digit);
        carry=sum/10;
        first=first->next;
    }
     while(second!=NULL){        
        int sum= carry+second->data;
        int digit = sum%10;
        insertAtTail(anshead,anstail,digit);
        carry=sum/10;
        second=second->next;
    }
    while(carry!=0){
        int sum=carry;
        int digit = sum%10;
        insertAtTail(anshead,anstail,digit);
        carry=sum/10;
    }
    return anshead;
}
        

Node* AddTwoLists(Node* &first,Node* &second){
    first=reverseLinkedList(first);
    second=reverseLinkedList(second);
    Node* ans = add(first,second);
    ans=reverseLinkedList(ans);
    return ans;
}

int main()
{
    Node* node1 = new Node(7);
    Node* head1=node1;
    insertAtHead(head1,6);
    Node* node2 = new Node(8);
    Node* head2=node2;
    insertAtHead(head2,4);
    insertAtHead(head2,1);
    Node* ans =AddTwoLists(head1,head2);
    print(ans);
    return 0;
}