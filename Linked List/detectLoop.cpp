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

void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp -> next=head;
    head =temp;
}

void print(Node* &head){
    Node* temp = head;   
    while (temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
//this is the normal meathod to detect loop
bool detectLoop(Node* &head){
    if(head==NULL)
        return false;
    map<Node*,bool> visited;
    Node* temp= head;
    while(temp!=NULL){
        if(visited[temp]==true)
            return true;
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}

//This is the floyd cycle detectection method

Node* FloydLoopDetect(Node* & head){
    if(head==NULL) return NULL;
    Node* slow = head;
    Node* fast = head;

    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            cout<<"cycle is present at"<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;


}

Node* getStartingNode(Node* &head){
    if(head==NULL) return NULL;
    Node* intersection= FloydLoopDetect(head);
    Node* slow= head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}

void removeLoop(Node* &head){
    if(head==NULL) return;
    Node* startofLoop= getStartingNode(head);
    Node* temp = startofLoop;
    while(temp->next!=startofLoop){
        temp=temp->next;
    }
    temp->next=NULL;
}



int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head,9);
    insertAtHead(head,8);
    insertAtHead(head,7);
    insertAtHead(head,6);
    insertAtHead(head,5);  
    print(head);
    tail->next=head->next;
    // cout<<head->data<<" "<<tail->data;
    // FloydLoopDetect(head);
    print(head);
    Node* loop =getStartingNode(head); 
    cout<<"loop starts at"<<loop->data;
    removeLoop(head);
    return 0;
}