//sum of first n numbers in parameterized way
#include<iostream>
using namespace std;
int summation(int i,int sum){
    if(i<1){
        cout<<sum;
        return 0;
    }
    summation(i-1,sum+i);
}
int main(){
    summation(5,0);
}