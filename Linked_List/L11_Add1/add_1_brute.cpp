//add +1 to the given ll

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
Node* add(Node* head){
    head=reverse(head);//0(n)
    Node* temp=head;
    int carry=1;
    while(temp!=NULL){//0(n)
        temp->data=temp->data+carry;
        if(temp->data<10){
            carry=0;
            break;
        }
        else{
            temp->data=0;
            carry=1;
        }
        temp=temp->next;
    }
    if(carry==1){
        Node* newNode= new Node(1);
        head=reverse(head);
        newNode->next=head;
        return newNode;
    }
    head=reverse(head);//0(n)
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
    head=add(head);
    printLL(head);
    return 0;
}

//tc=0(3n)
//sc=0(1)