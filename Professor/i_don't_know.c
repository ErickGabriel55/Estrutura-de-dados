// Lista duplamente encadeada

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;           
    struct Node* next;  
    struct Node* prev;
} Node;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node)); 
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}


void append(Node** head, int value) {
    Node* newNode = createNode(value);
    
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void printListReverse(Node* head) {
    if (head == NULL) return;

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

void freeList(Node* head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);  // Libera a memória do nó atual
    }
}

int main() {
    Node* head = NULL;

    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);

    printf("Lista (crescente): ");
    printList(head);

    printf("Lista (decrescente): ");
    printListReverse(head);

    freeList(head);
    
    return 0;
}
