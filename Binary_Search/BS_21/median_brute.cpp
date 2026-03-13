//find the median of two sorted arrays

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    vector<int> a(n1);
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    vector<int> b(n2);
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    vector<int> arr;
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]) arr.push_back(a[i++]);
        else arr.push_back(b[j++]);
    }
    while(i<n1) arr.push_back(a[i++]);
    while(j<n2) arr.push_back(b[j++]);
    int n=n1+n2;
    if(n%2==1){
        cout<<arr[n/2];
    }
    else{
        double median=((arr[n/2])+(arr[n/2-1]))/2.0;
        cout<<"Median:"<<median;
    }
    return 0;
}
//tc=0(n1+n2)
//sc=0(n1+n2)