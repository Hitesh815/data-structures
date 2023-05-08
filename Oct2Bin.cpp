#include <iostream>
using namespace std;

string convert(int n){
    string r="";
    while(n>0){
        if(n%2==0)r="0"+r;
        else r="1"+r;
        n=n/2;
    }
    while(r.length()<3)r="0"+r;
    return r;
}

int main(){
    cout<<"Enter an octal number\n";
    int octal;
    cin>>octal;
    string ans="";
    while(octal>0){
        int digit=octal%10;
        if(digit>7||digit<0){
            cout<<"Invalid octal number\n";
            return 0;
        }
        ans=convert(digit)+ans;
        octal=octal/10;

    }
    cout<<ans<<"\n";
    return 0;
}