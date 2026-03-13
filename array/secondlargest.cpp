//find second largest element
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    int seclargest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            seclargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>seclargest){
            seclargest=arr[i];
        }
    }
    cout<<"The second largest element is:"<<seclargest;
    return 0;
}
//brute= sort the array and get second largest; TC=O(nlogn+n)
//better= set seclargest=-1 and find largest and compare seclargest in whole array;TC=O(2n)
//optimal=O(n)..non negative integer array