#include<iostream>
using namespace std;
int main(){
    int m1,m2,m3;
    cout<<"Enter three number: ";
    cin>>m1,m2,m3;
    if(m1>=33 && m2>=33 && m3>=33){
        cout<<"pass";
    }
    else{
        cout<<"fail";
    }
    return 0;
}