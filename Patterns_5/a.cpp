//for the outer loop,count the number of lines
//for the inner loop,focus on the columns and connect them somehow to the rows
//Print them inside inner loop
//observe symmetry[optional]

//* * * *
//* * * *
//* * * *
//* * * *
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}