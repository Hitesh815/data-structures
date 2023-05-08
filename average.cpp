#include <iostream>
using namespace std;
int average(int a[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+a[i];
    }
    int avg=sum/size;
    return avg;
}
int average(int a[],int b[],int size,int size1,int size2){
    int suma=0;
    for(int i=0;i<size1;i++){
        suma=suma+a[i];
    }
    int sumb=0;
    for(int i=0;i<size2;i++){
        sumb=sumb+b[i];
    }
    int avg=(suma+sumb)/size;
    return avg;
}
int main(){
    int a[]={2,4,5,6,7,8,9,1},b[]={2,3,5,5,6,8,9,5,34,3};
    int sizeoa=sizeof(a)/sizeof(int);
    int sizeob=sizeof(b)/sizeof(int);
    int totalsize=sizeoa+sizeob;
    int avgofa=average(a,sizeoa);
    int avgtot=average(a,b,totalsize,sizeoa,sizeob);
    cout<<avgtot;
    return 0;

}