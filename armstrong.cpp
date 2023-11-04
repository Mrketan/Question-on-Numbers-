#include<iostream>
using namespace std;
 
int main(){

    int n;
    cin>>n;
    int arm=n;
    int sum=0;

    while(n!=0){
        int l=n%10;
        sum=sum+(l*l*l);
        n=n/10;
    }

    if(sum==arm){
        cout<<" number is armstrong";
    }
    else{
        cout<<"number is not armstrong";
    }
}