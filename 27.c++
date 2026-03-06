#include<iostream>
using namespace std;  
int main(){
    int n;
    cout<< "enter a number : ";
    cin>>n;
    bool flag = true;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(n==1){
        cout<<" niether prime nor composite";
    }
   else if(flag==true){
        cout<<"prime number";
    }
    else{
        cout<<"composite";
    }
}