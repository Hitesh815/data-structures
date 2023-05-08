#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include "mystack.h"

using namespace std;
void eval(char postFix[])
{
    stack s;
    int count=0;
    for (int i = 0; i < strlen(postFix) - 1; i++)
    {
        if (postFix[i] == '\0')
            break;
        if (isdigit(postFix[i])){
            push(s, postFix[i] - 48);
            count++;
        }
        else
        {
            if(count<2){
                cout<<"Evaluation: Incorrect Expression.\n";
                return;
            }
            count--;
            int a = peek(s);
            cout<<"Popped Element is : "<<pop(s)<<"\n";
            int b = peek(s);
            cout<<"Popped Element is : "<<pop(s)<<"\n";
            if (postFix[i] == '+')
                push(s, b + a);
            if (postFix[i] == '-')
                push(s, b - a);
            if (postFix[i] == '*')
                push(s, b * a);
            if (postFix[i] == '/')
                push(s, b / a);
            if (postFix[i] == '^' || postFix[i] == '$')
                push(s, pow(b, a));
        }
    }
    cout <<"Evaluaton: "<<peek(s) << "\n";
}
int preced(char c)
{
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    if (c == '^' || c=='$')
        return 3;
    else
        return 0;
}
void converter(char inF[])
{
    ArrayStack op;
    char postF[101];
    int pf = 0;
    for (int i = 0; i < strlen(inF); i++)
    {
        if (isalpha(inF[i]) || isdigit(inF[i]))
            postF[pf++] = inF[i];
        else if (inF[i] == '(')
            push(op, '(');
        else if (inF[i] == ')')
        {
            while (!isEmpty(op) && peek(op) != '(')
            {
                postF[pf++] = peek(op);
                cout<<"Popped operator is: "<<pop(op)<<"\n";
            }
            cout<<"Popped operator is: "<<pop(op)<<"\n";
        }
        else
        {
            if (isEmpty(op))
                push(op, inF[i]);
            else
            {
                if (preced(peek(op)) < preced(inF[i]))
                    push(op, inF[i]);
                else
                {
                    while (!isEmpty(op) && preced(peek(op)) >= preced(inF[i])) // the stack is popped until the precedence of current operator is
                    {                                                             // less than or equal in precedence not the entire stack.
                        postF[pf++] = peek(op);
                        cout<<"Popped operator is: "<<pop(op)<<"\n";
                    }
                    push(op, inF[i]);
                }
            }
        }
    }
    postF[pf] = '\0';
    cout << "Postfix expression      : " << postF << "\n";
}
void stackop(){
    cout<<setfill('$')<<setw(40)<<right<<"Stack operations"<<setw(20)<<"\n";
    cout<<"a. insert element into the stack.\n";
    cout<<"b. delete element from stack.\n";
    cout<<"c. display the stack.\n";
    cout<<"d. show the topmost element in the stack.\n";      
    cout<<"e. back.\n";
    bool f=true;
    stack s;
    char ch;
    while (f){
        cout<<setfill('$')<<setw(60)<<"\n";
        cout<<"Operation to be performed: ";
        cin>>ch;
        cout<<"\n";
        switch(ch){
            case 'a':{
                cout<<"Enter number to insert.\n";
                int c;
                cin>>c;
                push(s,c);
                break;
            }
            case 'b':{
                cout<<"Popped element is : "<<pop(s)<<"\n";
                break;
            }
            case 'c':{
                cout<<"Full stack is displayed.\n";
                display(s);
                break;
            }
            case 'd':{
                cout<<"Top most element is :"<<peek(s)<<"\n";
                break;
            }
            case 'e':{
                cout<<"Going back.\n";
                f=false;
                break;
            }
            default:cout<<"Invalid choice.Enter choice from the list.\n";
        }
    }
}
int main(){
    cout<<setfill('#')<<setw(40)<<right<<"Stack and its application"<<setw(20);
    cout<<"\n";
    cout<<"1. Demonstrate stack operations.\n";
    cout<<"2. Convert an algebraic expresson from infix to postfix.\n";
    cout<<"3. Evaluate the given postfix expression.\n";
    cout<<"4. Exit.\n";

    int ch;
    bool f=true;  
    while(f){
        cout<<setfill('#')<<setw(60)<<"\n";
        cout<<"Enter your choice: ";
        cin>>ch;
        cout<<"\n";
        switch(ch){
            case 1:{
                stackop();   
                break;
            }
            case 2:{
                cout << "Enter a infix expression: ";
                char inF[101];
                cin.ignore();
                fgets(inF, 101, stdin);
                converter(inF);
                break;
            }
            case 3:{
                cout << "Enter postFix Expression.\n";
                char postFix[101];
                cin.ignore();
                fgets(postFix, 101, stdin);
                eval(postFix);
                break;
            }
            case 4:{
                cout<<"Exiting.\n";
                f=false;
                break;
            }
            default:cout<<"Invalid choice. Enter choice between 1-4.\n";
        }
    }
    return 0;
}