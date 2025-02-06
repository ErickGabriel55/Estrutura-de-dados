#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Node {
    int key;
    struct Node* left;
    struct Node* right;
    
} Node;

Node* createNode(int key){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode
}