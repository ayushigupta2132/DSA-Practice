//determine the first and the last occurance of the number
//in case it doesn't exist..return -1
//binary search using lower bound and upper bound
//lowerbound-> arr[i]>=x
//upperboound-> arr[i]>x
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
//if the number exists:
//the first occuring index can be given as lowerbound(target)
//and the last occuring index can be given as [upperbound(target)-1]
//if the number is not present it will return the next number's index or a hypothetical index
//so it's important to cross check
    int *lb=lower_bound(arr,arr+n,target);
    int *ub=upper_bound(arr,arr+n,target);
    if(lb==arr+n || *lb!=target){
        cout<<"{"<<-1<<","<<-1<<"}";
    }
    else{
        int first=lb-arr;
        int last=(ub-arr)-1;
        cout<<"{"<<first<<","<<last<<"}";
    }
    return 0;
}
//tc=2*0(logn)..base2
//sc=0(1)