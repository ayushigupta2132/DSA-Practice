//find pairs in a given ll whose sum is equal to the given sum

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

vector<pair<int,int>> sum_pair(Node* head,int sum){
    Node* temp1=head;
    vector<pair<int,int>> ds;
    while(temp1!=NULL){
        Node* temp2=temp1->next;
        while(temp2!=NULL){
            if(temp1->data+temp2->data==sum){
                ds.push_back({temp1->data,temp2->data});
            }
            temp2=temp2->next;
        }
        temp1=temp1->next;
    }
    return ds;
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

//tc=0(n^2)..nearly
//sc=0(1)