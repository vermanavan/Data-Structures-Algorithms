#include <iostream>
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
void insertAtTail(Node* &tail, int d)
{
    Node* temp= new Node(d);
    tail->next=temp;
    tail = temp;
}
void InsertAtPos(Node* &tail,Node* &head ,int pos, int d )
{
    Node* temp= head;
    int cnt=1;
    while (cnt<pos-1)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL)
    {
        insertAtTail(tail,d);
    }
    else{
        Node* nodeToInsert=new Node(d);
        nodeToInsert->next=temp->next;
        temp->next=nodeToInsert;
    }
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
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail= node1;

    print(head);
    
    insertAtTail(tail,12);
    print(head);
    
    insertAtTail(tail,15);
    print(head);   
    
    InsertAtPos(tail,head,4,22);
    print(head);
    
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    
    deleteNode(4,head);
    print(head);
    
    


    return 0;
}

    

    
    

