//insert the element before head of the linked list


#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};

// Convert array to linked list
Node* convertArrtoLL(vector<int>& arr) {
    if (arr.size() == 0) return nullptr;

    Node* head = new Node(arr[0], nullptr);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Insert at head
Node* insert_head(Node* head, int val) {
    Node* temp = new Node(val, head);
    return temp;
}

// Print linked list
void printLL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {2, 5, 8, 7};

    Node* head = convertArrtoLL(arr);
    head = insert_head(head, 100);

    printLL(head);
    return 0;
}
