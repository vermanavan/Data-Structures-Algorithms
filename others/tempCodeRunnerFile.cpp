 #include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyCircularLinkedList {
private:
    Node* head;

public:
    DoublyCircularLinkedList() {
        head = nullptr;
    }

    
    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            head->next = head;
            head->prev = head;
        } else {
            Node* last = head->prev;
            last->next = newNode;
            newNode->prev = last;
            newNode->next = head;
            head->prev = newNode;
        }
    }

    
    void deleteElement(int val) {
        if (!head) {
            std::cout << "List is empty. Deletion failed." << std::endl;
            return;
        }

        Node* current = head;
        Node* prevNode = nullptr;
        bool found = false;

        do {
            if (current->data == val) {
                found = true;
                break;
            }
            prevNode = current;
            current = current->next;
        } while (current != head);

        if (found) {
            if (current == head && current->next == head) {
                
                head = nullptr;
            } else if (current == head) {
                
                Node* last = head->prev;
                head = head->next;
                last->next = head;
                head->prev = last;
            } else {
                prevNode->next = current->next;
                current->next->prev = prevNode;
            }

            delete current;
            std::cout << "Element " << val << " deleted from the list." << std::endl;
        } else {
            std::cout << "Element " << val << " not found in the list." << std::endl;
        }
    }

    
    void display() {
        if (!head) {
            std::cout << "List is empty." << std::endl;
            return;
        }

        Node* current = head;
        do {
            std::cout << current->data << " ";
            current = current->next;
        } while (current != head);
        std::cout << std::endl;
    }
};

int main() {
    DoublyCircularLinkedList myList;

    myList.insert(1);
    myList.insert(2);
    myList.insert(3);
    myList.insert(4);

    std::cout << "Initial list: ";
    myList.display();

    myList.deleteElement(3);
    myList.deleteElement(1);

    std::cout << "Updated list: ";
    myList.display();

    return 0;
}
