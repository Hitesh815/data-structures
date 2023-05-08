#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
node*head;


void insert(int x){
    node*temp=new node;
    temp->data=x;
    temp->next=head;
    head=temp;
}
void print(){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<"\n";
}
void insertend(int x){
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node*temp2= new node;
    temp2->data=x;
    temp->next=temp2;
    temp2->next=NULL;
}
void insertatloc(int n,int x){
    node*temp=head;
    for(int i=0;i<=n-1;i++){
        temp=temp->next;
    }
    node*temp2=head;
    for(int i=0;i<=n-2;i++){
        temp2=temp2->next;
    }
    node*temp1=new node;
    temp2->next=temp1;
    temp1->data=x;
    temp1->next=temp;
}
void removeatloc(int n){
    node*temp=head;
    for(int i=0;i<=n-1;i++){
        temp=temp->next;
    }
    node*temp2=head;
    for(int i=0;i<=n-2;i++){
        temp2=temp2->next;
    }
    temp2->next=temp->next;
    delete temp;
}
void removetail(){
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node*temp1=head;
    while (temp1->next!=temp)
    {
        temp1=temp1->next;
    }
    temp1->next=NULL;
    delete temp;
}
void remove(){
    node *temp=head;
    head=head->next;
    delete temp;
}
int main()
{
    head=NULL;
    insert(2);
    insert(12);insert(21);insert(34);insert(56);insert(62);insert(23);
    insertend(43);
    print();
    removetail();
    print();
    insertatloc(2,78);//if you want to insert the 3rd node then pass 2.and pass the value as well.
    print();
    removetail();
    removeatloc(2);//if you want to remove the 3rd node then pass 2.
    print();

    return 0;
}
