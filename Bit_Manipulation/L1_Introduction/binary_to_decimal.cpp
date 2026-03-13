#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(string s){
    int res = 0;
    int power = 1;
    for(int i = s.length() - 1; i >= 0; i--){
        if(s[i] == '1'){
            res += power;
        }
        power *= 2;
    }
    return res;
}

int main(){
    string s;
    cin >> s;
    cout << binaryToDecimal(s);
    return 0;
}
