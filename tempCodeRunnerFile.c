#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int data;
    struct list* next;
} node;

node* ref = NULL;

node* createNode(int data) {
    node* temp = (node*)malloc(sizeof(node));
    temp->data = data;
    ref->next = temp;
    temp->next = NULL;
}

void printList() {
    node* temp = ref;
    while(temp != NULL) {
    printf("%d\t", temp->data);
    temp = temp->next;
    }  
    printf("\n");
}

void main() {
    int num, data;
    ref->data = 0;
    printf("Enter the number of nodes you want to add:\n");
    scanf("%d", &num);
    printf("Enter the data for each node:\n");
    for(int i=0; i<num; i++) {
        scanf("%d", &data);
        createNode(data);
    }
    
    printf("\nFinal List:\n");
    printList();
}