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
Node* insert_k_el(Node* head, int el, int k) {
    if(head==NULL){
        return NULL;
    }
    if(head->data==k){
        return new Node(el,head);
    }
    Node* temp=head;
    while(temp->next!=NULL){
        if(temp->next->data==k){
            Node* x=new Node(el,temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
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
    head = insert_k_el(head, 100,8);

    printLL(head);
    return 0;
}
