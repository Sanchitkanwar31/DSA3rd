
#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node
struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Function to add a node at the end of the linked list
void addNodeAtEnd(int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to add a node at the head of the linked list
void addNodeAtHead(int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}

// Function to add a node at a specific position in the linked list
void addNodeAtPosition(int newData, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;

    if (position == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    struct Node* current = head;
    for (int i = 0; i < position - 1 && current != NULL; i++) {
        current = current->next;
    }

    if (current == NULL) {
        printf("Invalid position\n");
        free(newNode);
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
}

// Function to display the linked list
void display() {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d", temp->data);

        temp = temp->next;
        if (temp != NULL) {
            printf(" -> ");
        }
    }
    printf("\n");
}

void delete_head(){
    struct Node* temp = head;
    head=head->next;
    free(temp);
}


void delete_end(){
    struct Node* temp = NULL;
    struct Node* ptr=head;
    if(head==NULL){
        printf("Enter delete");
    }
    else{
        while(ptr->next!=NULL){
            temp=ptr ;
            ptr=ptr->next;
        }
        temp->next=NULL;
        free(ptr);

    }
}

void delete(int pos){
    struct Node* temp = head;
    struct Node* ptr=head;
    int cnt=1;
    if(pos==0){
        delete_head();
    }
    else{
        while(cnt< pos ){
            temp=ptr ;
            ptr=ptr->next;
            cnt++;
        }
        temp->next=ptr->next;
        free(ptr);

    }
    printf("Deleted");
}


int main() {
    int choice = 1, data, position;

    while (choice) {
        printf("\n1. Add element at end\n");
        printf("2 Add element at head\n");
        printf("3 Add element at a specific position\n");
        printf("4 Display linked list\n");
        printf("5 Delete linked list\n");
        printf("0 Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("Choice is -> %d\n", choice);
        if(choice){
            printf("True\n");
        }

        switch (choice) {
            case 1:
                printf("Enter the data: ");
                scanf("%d", &data);
                addNodeAtEnd(data);
                break;
            case 2:
                printf("Enter the data: ");
                scanf("%d", &data);
                addNodeAtHead(data);
                break;
            case 3:
                printf("Enter the data: ");
                scanf("%d", &data);
                printf("Enter the position: ");
                scanf("%d", &position);
                addNodeAtPosition(data, position);
                break;
            case 4:
                display();
                break;
            case 0:
                exit(0);
            case 5:
                printf("Enter the position: ");
                scanf("%d", &position);
                delete(position);
                break;
            default:
                printf("Invalid choice\n");
        }
        
    }

    return 0;
}
