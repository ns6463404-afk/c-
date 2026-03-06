#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number ; ";
    cin>>n;
    int rev = 0;
    int count = 0;
    while(n!=0){
        int ld = n%10;
         rev *= 10;
         rev += ld;
         n /= 10;
         count++;
    }
    cout<<count;
}