#include<iostream>
#include<cmath>
#include<cctype>
using namespace std;
class stack
{
    private:
    int arr[100];
    int top;

public:
stack()
{
    top=-1;
}
void push(int val)
{
    top++;
    arr[top]=val;
}
int pop()
{
    int p=arr[top];
    top--;
    return(p);
}
};
int evaluate(char x,int op1,int op2)
{
    if(x=='+')
    return(op1 + op2);

    if(x=='-')
    return(op1 - op2);

    if(x=='*')
    return(op1 * op2);

    if(x=='/')
    return(op1 / op2);

    if(x=='%')
    return(op1 % op2);

    if(x=='$')
    return(pow(op1,op2));

    return 0;
}
int main(void)
{
    stack s;
    char x;
    int op1,op2,val;
    cout<<"\nEnter postfix expression:";
    while((x=getchar())!='\n')
    {
        if(isdigit(x))
        {
            s.push(x-48);
        }
        else
        {
            op2=s.pop();
            op1=s.pop();
            val=evaluate(x,op1,op2);
            s.push(val);
        }
    }
    val=s.pop();
    cout<<"\nAnswer="<<val;
    return 0;
}

/*
output
PS C:\DSA Practicals> g++ postfix_expression_using_stack.cpp -o postfix_expression_using_stack
PS C:\DSA Practicals> .\postfix_expression_using_stack                                        

Enter postfix expression:56+3-95*2/2%67$32

Answer=2
*/
