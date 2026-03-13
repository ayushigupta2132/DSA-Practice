//merge the two sorted ll

#include<iostream>
#include<vector>
#include<algorithm>
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

Node* merge(Node* head1,Node* head2){
    vector<int> arr;
    Node* temp1=head1;
    Node* temp2=head2;
    while(temp1!=NULL){
        arr.push_back(temp1->data);
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        arr.push_back(temp2->data);
        temp2=temp2->next;
    }

    sort(arr.begin(),arr.end());
    Node* head=convertArrtoLL(arr);
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
    vector<int> arr1={2,4,6,7,9};
    vector<int> arr2={1,3,4,6,9};
    Node* head1=convertArrtoLL(arr1);
    Node* head2=convertArrtoLL(arr2);
    Node* head=merge(head1,head2);
    printLL(head);
    return 0;
}
//tc=0(n1)+0(n2)+0(nlogn)+0(n)
//sc=0(n)+0(n)