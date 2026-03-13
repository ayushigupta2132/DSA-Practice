//find the intersection point of Y linked list

#include<iostream>
#include<vector>
#include<unordered_map>
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

Node* intersection(Node* head1,Node* head2){
    unordered_map<Node*,int> mpp;
    Node* temp=head1;
    while(temp!=NULL){
        mpp[temp]=1;
        temp=temp->next;
    }
    temp=head2;
    while(temp!=NULL){
        if(mpp.find(temp) != mpp.end()){
            return temp;
        }
        temp=temp->next;
    }
    return NULL;
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
    vector<int> arr1={2,3,4,5,6};
    vector<int> arr2={1,7,3,4,5,6};
    Node* head1=convertArrtoLL(arr1);
    Node* head2=convertArrtoLL(arr2);
    head=intersection(head);
    printLL(head);
    return 0;
}

//tc=0(n1logn1)
//sc=0(n1)