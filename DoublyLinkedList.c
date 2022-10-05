#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct list {
    struct list* prev;
    int data;
    struct list* next;
} node;

node* head = NULL;

void createNode(int data) {
    node* temp = (node*)malloc(sizeof(node));
    node* last = head;
    temp->data = data;
    temp->next = NULL;
    if(head==NULL) {
        head = temp;
        temp->prev = head;
    }
    else {
        while(last->next != NULL) {
            last = last->next;
        }
        last->next = temp;
        temp->prev = last;
    }
}

void insertion(int after, int data) {
    node* temp = head;
    node* insert = (node*) malloc(sizeof(node));
    insert->data = data;
    bool canInsert = false;

    if(temp->data == after) { // If first node has key.
        insert->prev = temp;
        insert->next = temp->next;
        (temp->next)->prev = insert;
        temp->next = insert;
    }

    while(temp->next != NULL) { // Traversing to the last node.
        temp = temp->next;
    }
    if(temp->data == after) { // If last node has key.
        insert->prev = temp;
        insert->next = NULL;
        temp->next = insert;
    }

    else { // If any middle node has key.
        temp = head;
        temp=temp->next;
        while(temp != NULL) {
            if(temp->data == after) {
                canInsert = true;
                break;
            }
            temp = temp->next;
        }

        if(canInsert) {
            insert->prev = temp;
            insert->next = temp->next;
            (temp->next)->prev = insert;
            temp->next = insert;
        }
        else printf("Element to insert after not found.\n");
    }
}

void deletion(int del) {
    node* temp = head;
    bool canDelete = false;

    if(temp==head && temp->next == NULL && temp->data == del) { // If only one node is present.
        head = NULL;
        free(temp);
    }
    else if(temp==head && temp->next == NULL && temp->data != del) { // If only one node is present but it doesn't have the req data.
        printf("Element to be deleted not found.");
    }
    else { // any other node.
        if(temp==head && temp->data == del) { // If first node has the key.
            head = temp->next;
            (temp->next)->prev = head;
            free(temp);
        }
        else { // After first any key has node.
            while(temp->next != NULL) { // Traversing to the last node.
            temp = temp->next;
            }
            if(temp->data == del) { // If last key has node.
                (temp->prev)->next = NULL;
                free(temp);
            }
            else { // If any middle key has node.
                temp = head;
                temp = temp->next;
                while(temp->data != del) {
                    if(temp->next == NULL) {
                        printf("\nGiven element not found.");
                        canDelete = false;
                        break;
                    }
                    canDelete = true;
                    temp = temp->next;
                }
                if(canDelete) {
                    (temp->prev)->next = temp->next;
                    (temp->next)->prev = temp->prev;
                    free(temp);
                }
            }
        }   
    }
}

void printList() {
    node* temp = head;
    if (temp == NULL) {
        printf("No nodes in the list.");
    }
    else do {
        printf("%d\t", temp->data);
        temp = temp->next;
    } while(temp != NULL);
    printf("\n");
}


void main() {
    printf("Rhythm Garg, 2100290120141");

    int num, data;
    printf("\n\nEnter the number of nodes you want to add:\n");
    scanf("%d", &num);
    printf("Enter the data for each node:\n");
    for(int i=0; i<num; i++) {
        scanf("%d", &data);
        createNode(data);
    }

    int ins=0, val=0;
    printf("\nAfter which element would you like to insert?\n");
    scanf("%d", &ins);
    printf("What value would you like to insert?\n");
    scanf("%d", &val);
    insertion(ins, val);

    int del;
    printf("\nWhich element would you like to delete?\n");
    scanf("%d", &del);
    deletion(del);

    printf("\nFinal List:\n");
    printList();
}