//find the starting point of loop of the ll

#include<iostream>
#include<vector>
#include<map>
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

Node* loop(Node* head){
    map<Node* ,int> mpp;
    Node* temp=head;
    while(temp!=NULL){
        if(mpp.find(temp)!=mpp.end()){
            return temp;
        }
        mpp[temp]=1;
        temp=temp->next;
    }
    return NULL;
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
    head=loop(head);
    printLL(head);
    return 0;
}
//tc=0(n*2logn)
//sc=0(n)