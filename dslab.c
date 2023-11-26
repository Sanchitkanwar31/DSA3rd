//#include<stdio.h>
/*int top=-1,stk[5],i;

void push(int item){
        
        if (top==4){
            printf("Stack Overflow");
        }
        else{   
            top=top+1;
            stk[top]=item;
        }
        printf("Added \n");
    }

void pop(){
        if (top==-1){
            printf("Stack Underflow");
        }
        else{
            i=stk[top];
            top=top-1;
            printf("Value removed :%d \n",i);
        }
    }
void display(){
    for(int j=top;j>=0;j--){
        printf("%d \n",stk[j]);
    }
    if(top==-1)
        printf("empty");
}
void main(){
    //******To add elements in stack *****
    push(9);
    push(7);
    push(5);
    display();
    //***********Pop elements from stackk******
    printf("After removing array is :");
    pop();
    display();
}*/

//****Evaluation of postfix******
// #include<ctype.h>
// #include<stdlib.h>
// #include<string.h>
// #define Maxstack 100/*max size of stack*/
/*int stack[Maxstack];
int top = -1;

void push(int item){
    if(top==Maxstack-1){
        printf("stack overflow");
        return;
    }
    else{
        top=top+1;
        stack[top]=item;
    }
}

int pop(){
    int item;
    if (top==-1) {
        printf("stack under flow");
    }
    else {
        item = stack[top];
        top = top - 1;
        return item;
    }
}

void EvalPostfix(char postfix[]){
    int i;
    char ch;
    int val;
    int a,b;

    for(i=0;postfix[i]!='\0';i++){
        ch=postfix[i];
        if(isdigit(ch)){
            push(ch-'0');//If we get digit then convert that char to int form
        }
        else if(ch=='+'||ch == '-' ||ch == '*' ||ch == '/' ){
            //if we get an operator then pop two digits of stack
            a=pop();
            b=pop();

            switch (ch)
            {
            case '+':
                val=b+a;
                break;
            case '-':
                val=b-a;
                break;
            case '*':
                val=b*a;
                break;
            case '/':
                val=b/a;
                break;
            
            }
            push(val);
        }

    }
    printf("Result of evaluation :%d",pop());
}

int main(){
    int i;
    char postfix[20];
    printf("Enter postfix expression:");
    gets(postfix);
    EvalPostfix(postfix);
    return 0;
}*/

//***Balancing Parantheses****
/*int top=-1;
int stack[100];
int n=sizeof stck;
*/
/*void push(int item){
    if(top==n-1)
        cout<<overflow
    else
        top=top+1;
        stck[top]=item

}

int pop(){
    if(top==-1)
        cout<<underflow
    else 
        item=stck[top];
        top=top-1;
    return item;
}*/


//****Infinix to Postfixx*****

/*#include<stdio.h>
#include<ctype.h>
#define true 1
#define false 0
//#define maxsize 100;
char stack[100];
int top=-1;

void push(char x){
    stack[++top]=x;
    }

char pop(){
     if(top==-1){
        return-1;
     }
    else{
            return stack[top--];
        }
    
}

int priority(char x,char y){
        if(x=='^'||x=='*'||x=='/'||x=='%'){
            if(y=='^'){
                return false;
            }
            else{
                return true;
            }
        }
        else{
            if(x=='+'||x=='-'){
                if(y=='+'||y=='-')
                    return true;
                else 
                    return false;

                    
                
            }
        }
    }
int main(){
    char exp[10];
    char* e,x;
    printf("enter expression");
    scanf("%s",exp);
    printf("\n");
    e=exp;
    while(*e!='\0'){
        if(isalnum(*e))
            printf("%c",*e);
        else if(*e == '(')
            push(*e);
        else if(*e==')'){
            while((x=pop())!='(')
                printf("%c",x);
        }
        else{
            while(top!=-1 && priority(stack[top],*e))
                printf("%c",pop());
            push(*e);
        }
        e++;
    }
    while(top != -1)
    {
        printf("%c ",pop());
    }
    
}*/

//*********Infix to prefix**
/*#include<stdio.h>
#include<ctype.h>
#define true 1
#define false 0
//#define maxsize 100;
char stack[100];
int top=-1;

void push(char x){
    stack[++top]=x;
    }

char pop(){
     if(top==-1){
        return-1;
     }
    else{
            return stack[top--];
        }
    
}

int priority(char x,char y){
        if(x=='^'||x=='*'||x=='/'||x=='%'){
            if(y=='^'){
                return false;
            }
            else{
                return true;
            }
        }
        else{
            if(x=='+'||x=='-'){
                if(y=='+'||y=='-')
                    return true;
                else 
                    return false;

                    
                
            }
        }
    }

void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
 
int main(){
    char exp[10];
    char* e,x,str;
    printf("enter expression");
    scanf("%s",exp);
    printf("\n");
    str=exp;
    e=reverseStr(str);
    while(*e!='\0'){
        if(isalnum(*e))
            printf("%c",*e);
        else if(*e == '(')
            push(*e);
        else if(*e==')'){
            while((x=pop())!='(')
                printf("%c",x);
        }
        else{
            while(top!=-1 && priority(stack[top],*e))
                printf("%c",pop());
            push(*e);
        }
        e++;
    }
    while(top != -1)
    {
        printf("%c ",pop());
    }
    
}*/

//********Basic stack implementations**********
/*
#include <stdio.h>
#define true 1
#define false 0

char stack[100];
int top = -1;

void push(char x) {
    top++;
    stack[top] = x;
}

char pop() {
    if (top == -1) {
        return -1;
    } else {
        return stack[top--];
    }
}

int main() {
    char input[100];  // Changed the data type to char array
    int len, f = 1;

    printf("Enter string: ");
    scanf("%s", input);

    // Calculate length of input
    len = 0;
    while (input[len] != '\0') {
        len++;
    }

    // Push each digit onto the stack
    for (int i = 0; i < len; i++) {
        push(input[i]);
    }

   /* //Reverse 
    printf("Reverse : ");
    for (int i = 0; i <len; i++) {
        printf("%c",pop());
    }
    printf("\n");*/

    // Check for palindrome
    for (int i = 0; i < len; i++) {
        if (input[i] != pop()) {
            f = 0;
            break;
        }
    }
    

    if (f == 1) {
        printf("Palindrome\n");
    } else {
        printf("Non Palindrome\n");
    }

    return 0;
}*/
