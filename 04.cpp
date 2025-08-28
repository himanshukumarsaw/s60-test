#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    if (n%5==0  && n%11==0){
        cout<<"Give number is divisible by both 5 and 11";
    }
    else{
        cout<<"Give number is not divisible by both 5 and 11";
    }
    return 0;
}