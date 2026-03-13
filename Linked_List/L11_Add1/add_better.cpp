//add +1 to the given ll recursively

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

int addhelper(Node* temp){
    if(temp==NULL){
        return 1 ;
    }
    int carry=addhelper(temp->next);
    temp->data+=carry;
    if(temp->data<10) return 0;
    temp->data=0;
    return 1;
}

Node* addone(Node* head){
    int carry=addhelper(head);
    if(carry==1){
        Node* newNode=new Node(1);
        newNode->next=head;
        head=newNode;
    }
    return head;
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
    vector<int> arr={9,9,9,9};
    Node* head=convertArrtoLL(arr);
    head=addone(head);
    printLL(head);
    return 0;
}

//tc=0(n)
//sc=0(n)