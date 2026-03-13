//split the array into k subarrays such that the 
//max subarray's sum is min
//same as painter's partition problem
//code is same as book allocation
#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;
int countstudent(vector<int> &arr,int pages){
    int students=1;
    long long pagestudent=0;
    for(int i=0;i<arr.size();i++){
        if(pagestudent+arr[i]<=pages){
            pagestudent+=arr[i];
        }
        else{
            students+=1;
            pagestudent=arr[i];
        }
    }
    return students;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int student;
    cin>>student;
    if(student>n) cout<<-1;
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    while(low<=high){
        int mid=(low+high)/2;
        int students=countstudent(arr,mid);
        if(students>student){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<low;
    return 0;
}
//tc=0(log(sum-max+1))*0(n)