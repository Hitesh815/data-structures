#include <iostream>
using namespace std;
int main(){
    int list[]={0,3,5,6,10};
    cout<<"address \t"<<"|"<<"value \n";
    for(int i=0;i<sizeof(list)/sizeof(int);i++){
        cout<<&list[i]<<" "<<"|"<<list[i]<<" \n";
    }
    return 0;
}