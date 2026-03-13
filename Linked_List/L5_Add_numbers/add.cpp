//the numbers are given in reversed order
//you have to add them correctly
//and give the answer in reversed order
//return the head of the ll
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

void printLL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *add(Node *num1, Node *num2){
    Node* dummyhead= new Node(-1);
    Node* curr=dummyhead;
    Node* temp1=num1;
    Node* temp2=num2;
    int carry=0;
    while(temp1 != NULL || temp2 != NULL){
        int sum=carry;
        if(temp1) sum+=temp1->data;
        if(temp2) sum+=temp2->data;
        Node* newNode= new Node(sum%10);
        carry=sum/10;

        curr->next=newNode;
        curr=curr->next;

        if(temp1) temp1=temp1->next;
        if(temp2) temp2=temp2->next;
    }
    if(carry){
        Node* newNode=new Node(carry);
        curr->next=newNode;
    }
    return dummyhead->next;
}
int main(){
    vector<int> arr1={2,5,8,7};
    vector<int> arr2={1,8,3,2};
    Node* head1=convertArrtoLL(arr1);
    Node* head2=convertArrtoLL(arr2);
    Node* result = add(head1, head2);
    printLL(result);
    return 0;
}