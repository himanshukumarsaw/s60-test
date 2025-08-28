#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter three number: ";
    cin>>n1,n2,n3;
    if(n1>n2 && n1>n3){
        cout<<n1<<"is Larget number";
    }
    else if(n2>n1 && n2>n3){
        cout<<n2<<"is Larget number";
    }
    else{
        cout<<n3<<"is Larget number";
    }
    return 0;
}