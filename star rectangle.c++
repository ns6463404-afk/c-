#include<iostream>
using namespace std;
int main(){
    int c,r;
    cout<<"enter no of coloum : ";
    cin>>c;
    cout<<"enter no of rows: ";
    cin>>r;
    for(int i=1;i<=c;i++){
        for(int j=1;j<=r;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}