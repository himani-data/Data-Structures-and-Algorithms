#include <iostream>
using namespace std;

class node {
public:
    int val;
    node* next;
    node(int value) : val(value), next(nullptr) {}
};

class singlyLinkedList {
    node* head;

public:
    singlyLinkedList() {
        head = nullptr;
    }

    void insertAtBeginning(int x) {
        node* newnode = new node(x);
        newnode->next = head;
        head = newnode;
    }

    void insertAtPosition(int x, int pos) {
        if (pos == 0) {
            insertAtBeginning(x);
            return;
        }

        node* newnode = new node(x);
        node* temp = head;
        int count = 0;

        while (temp != nullptr && count < pos - 1) {
            temp = temp->next;
            count++;
        }

        if (temp == nullptr) {
            cout << "Position out of range" << endl;
            delete newnode;
            return;
        }

        newnode->next = temp->next;
        temp->next = newnode;
    }

    void insertAtEnd(int x) {
        node* newnode = new node(x);
        if (head == nullptr) {
            head = newnode;
        } else {
            node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }

    void display() {
        node* temp = head;
        while (temp != nullptr) {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    void deleteAtBeg() {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }
        node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteAtEnd() {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }
        if (head->next == nullptr) { // only one node
            delete head;
            head = nullptr;
            return;
        }
        node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }


    void deleteAtPos(int pos) {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;}
            if (pos == 0) {
                deleteAtBeg();
                return;}
                node* temp = head;
                int count = 0;
                while (temp->next != nullptr && count < pos - 1) {
                    temp = temp->next;
                    count++;
                    }
                    if (temp->next == nullptr) {
                        cout << "Position out of range" << endl;
                        return;}
                        node* nodeToDelete = temp->next;
                        temp->next = temp->next->next;
                        delete nodeToDelete;
                    }
        
        }; // ✅ Properly close the class here

int main() {
    singlyLinkedList l;
    do {
        cout << "\n1. Insert at beginning" << endl;
        cout << "2. Insert at position" << endl;
        cout << "3. Insert at end" << endl;
        cout << "4. Display" << endl;
        cout << "5. Delete from beginning" << endl;
        cout << "6. Delete from end" << endl;
        cout << "7. Delete at position" << endl;
        cout << "8. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int value;
                cout << "Enter value to insert: ";
                cin >> value;
                l.insertAtBeginning(value);
                break;
            }
            case 2: {
                int x, pos;
                cout << "Enter value to insert: ";
                cin >> x;
                cout << "Enter position: ";
                cin >> pos;
                l.insertAtPosition(x, pos);
                break;
            }
            case 3: {
                int x;
                cout << "Enter value to insert: ";
                cin >> x;
                l.insertAtEnd(x);
                break;
            }
            case 4:
                l.display();
                break;
            case 5:
                l.deleteAtBeg();
                cout << "Deleted" << endl;
                break;
            case 6:
                l.deleteAtEnd();
                cout << "Deleted at end " << endl;
                break;
                case 7:
                int pos;
                cout << "Enter position: ";
                cin >> pos;
                
                l.deleteAtPos(pos);
                cout << "Deleted at position " << endl;

                break;
            case 8:
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (true);

    return 0;
}
