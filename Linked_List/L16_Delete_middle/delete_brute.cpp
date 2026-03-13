//delete the middle node of the ll

#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};

Node* convertArrtoLL(vector<int> &arr){
    Node* head=new Node(arr[0],nullptr);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr);
        mover->next=temp;
        mover=temp;
    }
    return head;
} 

Node* middle(Node* head){
    Node* temp=head;
    if(head==NULL || head->next==NULL) return NULL;
    int n=0;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    int res=(n/2);
    temp=head;
    while(temp!=NULL){
       res--;
       if(res==0){
        Node* middle=temp->next;
        temp->next=temp->next->next;
        free(middle);
        break;
       }
       temp=temp->next;
    }
    return head;
}

void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    vector<int> arr={2,4,6,7,9};
    Node* head=convertArrtoLL(arr);
    head=middle(head);
    printLL(head);
    return 0;
}
//TC=0(N+N/2)
//SC=0(1)