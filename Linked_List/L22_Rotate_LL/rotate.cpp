//rotate the given ll

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

Node* findNthNode(Node* temp,int k){
    int cnt=1;
    while(temp!=NULL){
        if(cnt==k) return temp;
        cnt++;
        temp=temp->next;
    }
    return temp;
}

Node* rotate(Node* head,int k){
    if(head==NULL || k==0) return head;
    Node* tail=head;
    int len=1;
    while(tail->next != NULL){
        tail=tail->next;
        len+=1;
    }//0(n)
    if(k%len==0) return head;
    k=k%len;

    tail->next=head;
    Node* newlastNode=findNthNode(head,len-k);//0(n)
    head=newlastNode->next;
    newlastNode->next=NULL;
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
    head=rotate(head,12);
    printLL(head);
    return 0;
}
//tc=0(2n)
//sc=0(1)