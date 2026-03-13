//sort a linked list which has only 0s,1s and 2s

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

Node* sort_LL(Node* head){
    if(!head || !head->next) return head;
    //dummy heads
    Node* zerohead=new Node(-1);
    Node* onehead=new Node(-1);
    Node* twohead=new Node(-1);
    //tail pointers
    Node* zero=zerohead;
    Node* one=onehead;
    Node* two=twohead;
    Node* temp=head;
    //Distribute nodes
    while(temp!=NULL){
        if(temp->data==0){
            zero->next=temp;
            zero=temp;
        }
        else if(temp->data==1){
            one->next=temp;
            one=temp;
        }
        else{
            two->next=temp;
            two=temp;
        }
        temp=temp->next;
    }
    //connecting lists
    zero->next=(onehead->next)?onehead->next:twohead->next;
    one->next=twohead->next;
    two->next=NULL;
    //new head
    Node* newhead=zerohead->next;
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
    vector<int> arr={2,0,1,2,0,2,1};
    Node* head=convertArrtoLL(arr);
    head=sort_LL(head);
    printLL(head);
    return 0;
}

//tc=0(n)
//sc=0(1)