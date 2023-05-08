#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[7];
    for(int i=0;i<7;i++)cin>>arr[i];
    for(int i=0;i<7-1;i++){
        for(int j=0;j<7-i-1;j++){
            if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
        }
        for(int i=0;i<7;i++)cout<<arr[i]<<" ";
    cout<<"\n";
    }
    return 0;
}
