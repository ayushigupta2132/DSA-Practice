#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    //picks up a line unless you press enter
    cout<<str;
    return 0;
}