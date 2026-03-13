//check whether the ll is palindrome or not

#include<iostream>
#include<vector>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArrtoLL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

Node* reverse(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* newhead=reverse(head->next);
    Node* front=head->next;
    front->next=head;
    head->next=NULL;
    return newhead;
}

bool palindrome(Node* head){
    if(head==NULL || head->next==NULL){
        return true;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* newhead=reverse(slow->next);
    Node* first=head;
    Node* second=newhead;
    while(second !=NULL){
        if (first->data!=second->data)
        {
            reverse(newhead);
            return false;
        }
        first=first->next;
        second=second->next;
    }
    reverse(newhead);
    return true;
}

void printLL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    vector<int> arr={4,5,2,7,5,8};
    Node* head=convertArrtoLL(arr);
    cout << palindrome(head) << endl;
    printLL(head);
    return 0;
}

//tc=0(2n)
//sc=0(1)