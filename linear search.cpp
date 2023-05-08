#include <iostream>
using namespace std;

int main()
{
	int arr[6] = { 10, 20, 30, 40 };
    int result=30;
    for(int i=0;i=sizeof(arr);i++){
        if(arr[i]==result){
            cout<<"number found";
        }
    }
	return 0;
}
