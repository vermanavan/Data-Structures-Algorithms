#include <bits/stdc++.h>
using namespace std;

class Node
{   
    public:
    int data;
    Node* next;
    
    Node(int d){
        this-> data=d;
        this->next=NULL;
    }
    ~Node()
    {
        int value = this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"memory is freed of the data "<<value<<endl;
    }

};
void insertAtHead(Node* &head,int d)
{
    Node* temp = new Node(d);
    temp -> next=head;
    head =temp;
}
void print(Node* &head)
{
    Node* temp = head;
    
    while (temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void solve(Node* &first, Node* &second){
    Node*curr1=first;
    Node*next1=curr1->next;
    Node*curr2=second;
    Node*next2=curr2->next;
    while(next1!=NULL && curr2!=NULL){
        if((curr2->data>=curr1->data)&&(curr2->data<=next1->data)){
                curr1->next=curr2;
                next2=curr2->next;
                curr2->next=next1;
                curr1=curr2;
                curr2=next2;
        }
        else{
            curr1=next1;
            next1=next1->next;
            if(next1==NULL){
                curr1->next= curr2;
                return ;
            }
        }
    }
}


Node* merge2Sorted(Node* &first , Node*&second){
        if(first==NULL) return second;
        if(second==NULL) return first;
        if(first->data<= second->data){
            solve(first,second);
        }
        else{
            solve(second,first);
        }
        return first;

}
int main()
{
    Node* node1 = new Node(1);
    Node* head1 = node1;
    Node* node2 = new Node(2);
    Node* head2 = node2;
    insertAtHead(head1,3); 
    insertAtHead(head1,5); 
    insertAtHead(head2,4); 
    insertAtHead(head2,6);
    merge2Sorted(head1,head2);
    

    return 0;
}