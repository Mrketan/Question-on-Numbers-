#include<iostream>
using namespace std;
 
int main(){

    int n;
    cin>>n;
    int rev=0;

    while(n!=0){                                    // n zero hot nai toh parynt 
        int l=n%10;                                       
        rev=rev*10+l;
        n=n/10;
    }

    cout<<rev;


}