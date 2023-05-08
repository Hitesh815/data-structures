#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
    node*prev;
};
node*head;
void insert(int x){
    node*temp=new node;
    temp->data=x;
    temp->next=head;
    temp->prev=NULL;
    head->prev=temp;
    head=temp;
}
void print(){
    node*temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
}
int main(){
    head=NULL;
    head->next=head->prev=NULL;
    insert(4);
    insert(5);
    insert(6);
    insert(5);
    insert(23);
    print();
    return 0;
}