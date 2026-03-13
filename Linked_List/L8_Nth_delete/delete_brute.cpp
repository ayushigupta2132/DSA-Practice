//delete the nth node from end in ll

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

Node* delete_nth(Node* head,int N){
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    if(cnt==N){//nth node from end is head
        Node* newhead=head->next;
        delete head;
        return newhead;
    }
    int result=cnt-N;//iske baad wala delete krna hai
    temp=head;
    while(temp!=NULL){
        result--;
        if(result==0) break;
        temp=temp->next;
    }
    Node* delnode=temp->next;
    temp->next=temp->next->next;
    delete delnode;
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
    vector<int> arr={4,5,2,7,5,8};
    Node* head=convertArrtoLL(arr);
    head=delete_nth(head,2);
    printLL(head);
    return 0;
}

//tc=0(2*len)
//sc=0(1)