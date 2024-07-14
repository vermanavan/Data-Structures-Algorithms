#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;

        Node(int data)
        {
            this->data=data;
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
void print(Node* &head)
{
    Node* temp =head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtHead (Node* &head,int d)
{
    Node* temp = new Node(d);
    temp -> next=head;
    head =temp;
}
void insertAtTail(Node* &tail, int d)
{
    Node* temp= new Node(d);
    tail->next=temp;
    tail = temp;
}
void deleteNode(int pos, Node* &head) {
    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    } else {
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while (cnt < pos && curr != NULL) {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        
        if (curr == NULL) {
            
            return;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    Node* n1= new Node(10);
    Node* head =n1;
    Node* tail=n1;
    cout<<"This is the head and tail"<<endl;
    print(head);
    cout<<"After inserting at the head"<<endl;
    insertAtHead(head,15);
    print(head);
    cout<<"After inserting at tail"<<endl;
    insertAtTail(tail,5);
    print(head);
    cout<<"After deleting a node"<<endl;
    deleteNode(2,head);
    print(head);
return 0;
}