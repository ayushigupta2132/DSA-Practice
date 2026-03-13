//reverse the given ll

#include<iostream>
#include<vector>
#include<stack>
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
    head=reverse(head);
    printLL(head);
    return 0;
}

//tc=0(n)
//sc=0(n)...recursive stack space