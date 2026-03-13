//check if the number is power of two or not
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n > 0 && (n & (n-1)) == 0)
        cout << "Power of 2";
    else
        cout << "Not power of 2";
    return 0;
}
