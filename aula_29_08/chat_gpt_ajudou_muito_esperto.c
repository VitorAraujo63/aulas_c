#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void printList(struct Node* n) {
    while (n != NULL) {
        printf("%d -> ", n->data);
        n = n->next;
    }
    printf("NULL\n");
}

// Função para criar e retornar um novo nó
struct Node* newadd(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
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

    // Criação dos nós
    head = newadd(1);
    second = newadd(2);
    third = newadd(3);
    four = newadd(4);

    // Conectar os nós
    head->next = second;
    second->next = four;
    four->next = third;
    third->next = NULL;

    // Imprimir a lista
    printList(head);

    // Liberar a memória
    free(head);
    free(second);
    free(four);
    free(third);

    return 0;
}
