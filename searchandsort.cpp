#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,choice,choice2;
  do{
  cout<<("how many numbers are you going to input?\n");
  cin>>n;
  int arr[n];
  cout<<("enter your numbers\n");
  for(int i=0;i<=n-1;i++){
    cin>>arr[i];
  }
  cout<<"1.Display the numbers \n"<<"2.search an element\n"<<"3.Searching using binary numbers\n"<<"4.Sorting using bubble sort(ascending).\n"<<"5.Sorting using bubble sort(descending).\n"<<"6.Improvised bubble sort."<<endl;
  cout<<("enter your choice\n");
  cin>>choice;
  if(choice==5){
    cout<<("sorting in descending order\n");
    for(int i=0;i<=n-1;i++){
    for(int j=0;j<=n-2;j++){
      if(arr[j]<arr[j+1])swap(arr[j],arr[j+1]);
    }
  }
  for(int i=0;i<=n-1;i++){
    cout<<arr[i]<<",";
  }
  cout<<"\n";
  }
  else if(choice==4){
    cout<<("sorting in ascending order\n");
    for(int i=0;i<=n-1;i++){
    for(int j=0;j<=n-2;j++){
      if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
    }
  }
  for(int i=0;i<=n-1;i++){
    cout<<arr[i]<<",";
  }
  cout<<"\n";
  }
  else if(choice==2){
    int num;
    cout<<("which number do you want to find?\n");
    cin>>num;
    for(int i=0;i<=n-1;i++){
      if(arr[i]==num){
        cout<<("the number has been found and its at index ")<<i<<endl;
      }
    }
    cout<<"\n";
  }
  else if(choice==1){
    for(int i=0;i<=n-1;i++){
      cout<<arr[i];
      if(i!=n-1){
        cout<<",";
      }
    }
    cout<<"\n";
  }
  else if(choice==3){
    bool found=false;
    while (found==false)
    {
      int key;
      cout<<"which number you want to find out?\n";
      cin>>key;
      sort(arr,arr+7);
      int first=arr[0],last=arr[n-1],mid=arr[(n-1)/2];
      if(key==mid){
        found=true;
      }
      else if(mid<key){
        
      }
    }
    
  }
  cout<<"want to go again if yes then input 1 else 0\n";
  cin>>choice2;
  }while(choice2==1);
  return 0;
}