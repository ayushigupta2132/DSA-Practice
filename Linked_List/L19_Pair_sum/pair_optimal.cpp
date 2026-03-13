//find pairs in a given sorted dll whose sum is equal to the given sum

#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
};

Node* convertArrtoLL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        temp->prev = mover;
        mover=temp;
    }
    return head;
} 

Node* findTail(Node* head){
    Node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    return tail;
}

vector<pair<int,int>> sum_pair(Node* head,int sum){
    vector<pair<int,int>> ans;
    if(head==NULL) return ans;
    Node* left=head;
    Node* right=findTail(head);//0(n)
    while(left->data < right->data){//0(n)
        if(left->data+right->data==sum){
            ans.push_back({left->data,right->data});
            left=left->next;
            right=right->prev;
        }
        else if(left->data+right->data<sum) left=left->next;
        else right=right->prev;
    }
    return ans;
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
    vector<int> arr={1,2,3,4,6};
    Node* head=convertArrtoLL(arr);
    vector<pair<int,int>> ans = sum_pair(head, 5);
    for(auto p : ans){
        cout << "(" << p.first << "," << p.second << ") ";
    }
    return 0;
}

//tc=0(2n)
//sc=0(1)