//find the single occurance of two numbers in an array using map
//every number appears twice except two
#include<iostream>
#include<vector>
#include<map>
#include<list>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //since there are two different numbers..so minimum of 1 bit will be different in them
    //to if ham un dono ka xor krenge..to jo bits different honge..waha pe 1 aaega
    long XOR=0;//int mt overflow hoga for -2**31-1 ke liye
    for(int i=0;i<n;i++){
        XOR=XOR^arr[i];
    }
    int rightmost=(XOR & (XOR-1)) ^ XOR;
    int b1=0,b2=0;
    for(int i=0;i<n;i++){
        if(arr[i] & rightmost) b1=b1^arr[i];
        else b2=b2^arr[i];
    }
    cout<<b1<<" "<<b2;
    return 0;
}
//tc=0(2n)
//sc=0(1)

