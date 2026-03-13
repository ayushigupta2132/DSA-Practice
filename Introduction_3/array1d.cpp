#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    arr[0]+=10;
    cout<<arr[3]<<endl;
    cout<<arr[0]<<endl;
    return 0;
}
//array elements are stored in contiguous memory locations
//but we don't know the location of first element