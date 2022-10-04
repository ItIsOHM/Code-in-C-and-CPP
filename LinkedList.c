#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int data;
    struct node* next;
} node;

node* head = NULL;

node* createNode(int value) {
    node* temp = (node*)malloc(sizeof(node));
    temp->data = value;
    temp->next = head;
    head = temp;
    //printf("\nCurrent Head: %d\n", head);
}

void deletion(int del) {
    node* temp = head;
    for(int i=del; i > 0; i--) {
        if(temp->next!=NULL) {
            temp = temp->next;
        }
        else { 
            printf("End of List. Item not found.");
            break;
        }
    }
    node* save = temp->next;
    temp->next = save->next;
}

void insertion(int a, int ele) {
    node* insertionNode;
    insertionNode = malloc(sizeof(struct list));
    insertionNode->data = ele;

    node* temp = head;

    for(int i=a; i > 0; i--) {
        if(temp->next!=NULL) {
            temp = temp->next;
        }
    }
    insertionNode->next = temp->next;
    temp->next = insertionNode;
}

void printList() {
    node* temp = head;
    while(temp != NULL) {
    printf("%d\t", temp->data);
    temp = temp->next;
    }  
    printf("\n");
}

int main() {

    printf("Rhythm Garg, 2100290120141\n");
    int ele=0;
    int a;
    printf("How many elements do you want to insert?\n");
    scanf("%d", &a);
    printf("Enter the elements:\n");
    for(int i=0; i<a; i++) {
      scanf("%d", &ele);
      createNode(ele);
    }
   
    int ch;
    // printf("\nDo you want to enter more elements?\n");
    // printf("Press 1 if yes.\n");
    // printf("Press any other key if no.\n");
    // scanf("%d", &ch);
    // if(ch==1) {
    //     printf("How many elements do you want to insert?\n");
    //     scanf("%d", &a);
    //     printf("Enter the elements:\n");
    //     for(int i=0; i<a; i++) {
    //         scanf("%d", &ele);
    //         createNode(ele);
    //     }
    // }
    int x;
    printf("\nDo you want to enter an element in between?\n");
    printf("Press 1 if yes.\n");
    printf("Press any other key if no.\n");
    scanf("%d", &ch);
    if(ch==1) {
        printf("Where do you want to insert?\n");
        scanf("%d", &a);
        printf("Enter the elements:\n");
        scanf("%d", &x);
        insertion(a, x);
    }

    ch=0;
    printf("\nDo you want to delete any element?\n");
    printf("Press 1 if yes.\n");
    printf("Press any other key if no.\n");
    scanf("%d", &ch);
    if(ch==1) {
        int del;
        printf("Which element do you want to delete?\n");
        scanf("%d", &del);
        deletion(del);
    }
    printf("Final List: \n");
    printList();
   
    return 0;
}