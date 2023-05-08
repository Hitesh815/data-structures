#include <iostream>
using namespace std;
int main(){
    int frequency[101];
    for(int i=0;i<=100;i++){
        frequency[i]=0;
    }
    int n;
    do
    {
        cin>>n;
        frequency[n]=frequency[n]+1;
    } while (n>=0 && n<=100);
    cout<<"number"<<" "<<"|"<<" "<<"frequency"<<endl;
    for(int i=0;i<=100;i++){
        if(frequency[i]!=0){
            cout<<i<<"\t";
            cout<<frequency[i]<<endl;
        }
    }
    return 0;
    
}