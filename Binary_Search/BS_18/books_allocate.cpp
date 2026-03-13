//allocate all books to the student such that each student atleast get a book
//allocate such that the maximum number of pages assigned to a student is minimum

#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;
int func(int arr[],int n,int pages){
    int student=1;
    int pagestudent=0;
    for(int i=0;i<n;i++){
        if(pagestudent+arr[i]<=pages){
            pagestudent+=arr[i];
        }
        else{
            student++;
            pagestudent=arr[i];
        }
    }
    return student;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int student;
    cin>>student;
    int low=*max_element(arr,arr+n);
    int high=accumulate(arr,arr+n,0);
    for(int pages=low;pages<=high;pages++){
        int cntstudent=func(arr,n,pages);
        if(cntstudent==student){
            cout<<pages;
            break;
        }
    }
    return 0;
}
