#include<stdio.h>
#include<stdlib.h>
  
struct Node
    {
        int data;
        struct Node* next;
    };
  struct Node* head=NULL;
void insert_head(int d){
            struct Node* curr=(struct Node*)malloc(sizeof(struct Node));
                         
            curr->data=d;

            if(head == NULL){
                head = curr ;
                curr->next=NULL;
            }
            else{
                curr->next=head;
                head=curr;
            }
            
    }

void display(){
    if(head==NULL){
        printf("Empty");
    }

    else{
        struct Node* temp=(struct Node*)malloc(sizeof(struct Node));;
        temp = head ;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp = temp->next ;
            if (temp != NULL) {
                printf("-> ");
            }
        }
    
    }
}

void main(){
    int ch,d;
    printf("Enter choice");
    scanf("%d",&ch);

        switch(ch){
        Case 1 :
            printf("Element to add");
            scanf("%d",&d);
            insert_head(d);
            break;
        Case 2:
            prinf("Display");
            display();
        default:
        printf("Error choice");
    }
   

    // insert_head(1);
    // insert_head(2);
    // insert_head(3);
    // display();

}
