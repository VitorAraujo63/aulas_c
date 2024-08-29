#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void printList(struct Node* n) {
    while (n != NULL){
        printf("%d ->", n->data);
        n = n->next;
    }
    printf("NULL\n");
}

struct Node* newadd(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Alocação de memoria falhou!");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}


int main() {


    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    struct Node* four = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    four = newadd(4);

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = four;

    four->next = third;

    third->data = 3;
    third->next = NULL;


    printList(head);
    
    free(head);
    free(second);
    free(four);
    free(third);
    

    return 0;
}