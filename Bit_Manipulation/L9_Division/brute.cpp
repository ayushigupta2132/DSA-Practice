//divide the numbers
#include<iostream>
using namespace std;
int main(){
    int number,divisor;
    cin>>number>>divisor;
    int sum=0;
    int cnt=0;
    while(sum+divisor<=number){
        cnt+=1;
        sum+=divisor;
    }
    cout<<cnt;
    return 0;
}
//tc=0(number)...too high if divisor is 1