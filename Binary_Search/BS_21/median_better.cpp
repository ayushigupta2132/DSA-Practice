//find the median of two sorted arrays

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    vector<int> a(n1);
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    vector<int> b(n2);
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    int i=0,j=0;
    int n=n1+n2;
    int ind2=n/2;
    int ind1=ind2-1;
    int cnt=0;
    int ind1el=-1,ind2el=-1;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            if(cnt==ind1) ind1el=a[i];
            if(cnt==ind2) ind2el=a[i];
            cnt++;
            i++;
        }
        else{
            if(cnt==ind1) ind1el=b[j];
            if(cnt==ind2) ind2el=b[j];
            cnt++;
            j++;
        }
    }
    while(i<n1){
        if(cnt==ind1) ind1el=a[i];
        if(cnt==ind2) ind2el=a[i];
        cnt++;
        i++;
    }
    while(j<n2){
        if(cnt==ind1) ind1el=b[j];
        if(cnt==ind2) ind2el=b[j];
        cnt++;
        j++;
    }
    if(n%2==1){
        cout<<ind2el;
    }
    else{
        double ans=(ind1el+ind2el)/2.0;
        cout<<ans;
    }
    return 0;
}
//tc=0(n1+n2)
//sc=0(1)..only storing ans