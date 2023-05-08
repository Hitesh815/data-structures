#include<iostream>
#include<iomanip>
using namespace std;
struct stack{
  int array[100];
  int n=100;
  int top=-1;
}s;
void insert(int element){
    if (s.top>=s.n-1){
        cout<<"stack full\n";
    }
    else{
        s.top++;
        s.array[s.top]=element;
    }
}
void remove(){
    if (s.top==-1){
        cout<<"stack is empty\n";
    }
    else{
        cout<<"pop element="<<s.array[s.top]<<"\n";
        s.top--;
    }
}
void display(){
    if(s.top>=0){
        cout<<"the stack is=\n";
        for(int i=s.top;i>=0;i--){
            cout<<s.array[i]<<"\n";
        }
    }
    else{
        cout<<"stack is empty";
    }
}
void topmost(){
    if (s.top>=0){
        cout<<"the topmost element is= "<<s.array[s.top]<<"\n";
    }
    else{
        cout<<"stack is empty";
    }
}
int main(){
    int input;
    do{
        cout<<setfill('#')<<setw(40)<<"stack and its aplication"<<setw(15)<<""<<"\n"<<"1.to demostrate stack operations\n"<<"2.reverse the characters of  a word using stack\n"<<"3.reverse sentence using stack\n"<<"4.exit\n";
        cout<<"enter your choice of program to run"<<endl;
        cin>>input;
        if(input==1){
            int choice,element;
            cout<<setfill('#')<<setw(30)<<"stack operations"<<setw(15)<<""<<"\n\n";
            cout<<"1.insert element into stack.\n";
            cout<<"2.delete element from stack.\n";
            cout<<"3.display the stack\n";
            cout<<"4.show the topmost element in the stack\n";
            cout<<"5.back.\n";
            do{
                cout<<"enter the choice"<<endl;
                cin>>choice;
                if(choice==1){
                    cout<<"enter the value"<<endl;
                    cin>>element;
                    insert(element);
                }
                else if(choice==2){
                    remove();
                }
                else if(choice==3){
                    display();
                }
                else if(choice==4){
                    topmost();
                }
                else if(choice==5){
                    cout<<"exit"<<endl;
                }
                else{
                    cout<<"invalid choice"<<endl;
                }
            }while(choice!=5);
        }
    }while(input!=4);
  return 0;
}