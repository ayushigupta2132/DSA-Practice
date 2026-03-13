//find the smallest divisor given a threshold
//say arr[1 2 5 9] and threshold=6....so get the minimum number
//jisko saare array number se divide krke ceil ka sum lene ke baad <=threshold aaye

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int threshold;
    cin>>threshold;
    int maxi=*max_element(arr,arr+n);
    for(int d=1;d<=maxi;d++){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=ceil((double)arr[i]/d);
        }
        if(sum<=threshold){
            cout<<d;
            break;
        }
    }
    return 0;
}
//tc=0(max*n)