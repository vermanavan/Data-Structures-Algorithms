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
Node* sortList(Node* & head){
    int zerocount=0;
    int onecount=0;
    int twocount=0;
    Node* temp= head;
    while(temp!=NULL){
        if(temp->data==0) zerocount++;
        else if(temp->data==1) onecount++;
        else if(temp->data==2) twocount++;
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(zerocount!=0){
            temp->data=0;
            zerocount--;
        }
        else if(onecount!=0){
            temp->data=1;
            onecount--;
        }
        else if(twocount!=0){
            temp->data=2;
            twocount--;
        }
        temp=temp->next;
    }
    return head;
}

int main()
{
    Node* node1 = new Node(1);
    Node* head= node1;
    insertAtHead(head,0);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,2);
    insertAtHead(head,0);
    insertAtHead(head,1);
    insertAtHead(head,0);
    cout<<"before sorting"<<endl;
    print(head);
    cout<<"after sorting"<<endl;
    sortList(head);
    print(head);
    return 0;
}