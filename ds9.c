//*********Stack operations*******8
/*#include<stdio.h>
int stk[5],top=-1,i;


    

void push(int item){
        
        if (top==4){
            printf("Stack Overflow");
        }
        else{
            //printf("Enter item");
            // scanf("%d",&item);
            top=top+1;
            stk[top]=item;
        }
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
    printf("Start Stack \n");
    push(9);
    push(7);
    push(5);
    
    display();
    pop();
    pop();
    pop();

    // pop();
    // display();

    // pop();
    // printf("Stack is now : \n");
    // display();

    push(6);
    printf("Stack is now : \n");
    display();
    push(1);
    push(2);
    push(3);
    printf("Stack is now : \n");
    display();
}*/


//===by mam help===
#include <stdio.h>
int stack[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void display();
int main ()
{

    printf("Enter the number of elements in the stack ");
    scanf("%d",&n);
    printf("Stack operations using array");
    while(choice != 4)
    {
        printf("Chose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\n Enter your choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:

                push();
                break;

            case 2:

                pop();
                break;

            case 3:

                display();
                break;

            case 4:

                printf("Exiting");
                break;

            default:

                printf("Please Enter valid choice ");
            
        }
    }
    return 0;
}

void push ()
{
    int val;
    if (top == n-1 )
    printf("\n Overflow");
    else
    {
        printf("Enter the value?");
        scanf("%d",&val);
        top = top +1;
        stack[top] = val;
    }
}

void pop ()
{
    int value;
    if(top == -1)
    printf("Underflow");
    else
    {
    value=stack[top];
    top = top -1;
    printf("\nPopped Value is:%d\n",value);
    }
}
void display()
{
    for (i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
}
