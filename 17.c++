#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter digit a : ";
    cin>>a;
    cout<<"enter digit b : ";
    cin>>b;
    cout<<"enter digit c : ";
    cin>>c;
    if(a>b and a>c){
        cout<<"a is greater";
    }
    else if(b>a && b>c){
        cout<<"b is greater";
    }
    else{
        cout<<"c is greater";
    }
}