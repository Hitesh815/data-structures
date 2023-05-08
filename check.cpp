#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<("how many numbers are you going to input?\n");
  cin>>n;
  int arr[n];
  cout<<("enter your numbers\n");
  for(int i=0;i<=n-1;i++){
    cin>>arr[i];
  }
  int choice;
   cout << "1. Display the numbers \n 2.search an element "
          "\n 3. Searching using binary numbers \n 4. Sorting using bubble "
          "sort(ascending). \n 5.Sorting using bubble sort(descending). \n "
          "6.Improvised bubble sort."
       << endl;
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
  }
  else if(choice==1){
    for(int i=0;i<=n-1;i++){
      cout<<arr[i];
    }
  }
  return 0;
  
}