//using third variable:
//temp=a;
//a=b;
//b=temp;

//using xor operation
//as we know:..even no. of 1's:output=0
//             odd no. of 1's:output=1

#include<iostream>
using namespace std;
int main(){
    int a = 5, b = 7;
    a = a ^ b;
    b = a ^ b;//b = (a^b)^b= a  (as b^b=0)
    a = a ^ b;//a = (a^b)^b=(a^b)^a = b
    cout << a << " " << b;
}
