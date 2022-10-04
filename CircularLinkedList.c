#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct list {
    int data;
    struct list* next;
} node;

node* ref = NULL;

node* createNode(int data) {
    node* temp = (node*)malloc(sizeof(node));
    node* last = ref;
    temp->data = data;
    temp->next = NULL;
    if(ref==NULL) ref = temp;
    else {
        while(last->next != NULL) {
            last = last->next;
        }
        last->next = temp;
    }
}

void makeCircular() {
    node* temp = ref;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = ref;
}

void insertion(int after, int val) {
    node* insert = (node*)(malloc(sizeof(node)));
    insert->data = val;
    node* temp = ref;
    node* prev = ref;
    bool toInsert = false;

    if(prev->data == after) { //if first node has key.
        temp = temp->next;
        toInsert = true;
    }
    else { //checking if any else node has key, and if yes then shifting the pointers there.
        prev = prev->next;
        while(prev!= ref) {
        if(prev->data == after) {
            toInsert = true;
            break;
        }
        prev = prev->next;
    }

        prev = temp;
        if(toInsert)
            do {
                prev = temp;
                temp = temp->next;
                toInsert = true;
            } while((prev->data != after));
    }
    
    if(toInsert) { //if key is present then insertion will happen.
        prev->next = insert;
        insert->next = temp;
    } else printf("Element to insert after not found.\n");
}

void deletion(int del) {
    node* temp = ref;
    node* prev = ref;
    bool toDelete = false;
    while(temp->data != del) {
        if(temp->next == ref) {
            printf("\nGiven element not found.");
            toDelete = false;
            break;
        }
        toDelete = true;
        prev = temp;
        temp = temp->next;
    }

    if(toDelete) {
        //deletion if only one node is present
        if(ref == temp && temp->next == ref) {
            ref = NULL;
            free(temp);
        }

        if(temp == ref) { //if the node to be deleted is first node.
            prev = ref;
            while(prev->next != ref) prev = prev->next;
            //printf("%d", temp->data);
            ref = temp->next;
            prev->next = ref;
            free(temp);
        }
        else if(temp->next == ref) { //if the node to be deleted is last node.
            prev->next = ref;
            free(temp);
        }
        else { //any middle node.
            prev->next = temp->next;
            free(temp);
        }
    }
}

void printList() {
    node* temp = ref;
    do {
        printf("%d\t", temp->data);
        temp = temp->next;
    } while((temp != ref));
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
    makeCircular();

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