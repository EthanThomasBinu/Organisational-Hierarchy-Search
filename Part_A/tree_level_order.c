#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

typedef struct Node {
    char name[MAX];
    struct Node *firstChild;
    struct Node *nextSibling;
} Node;

Node *createNode(const char *name) {
    Node *node = (Node *)malloc(sizeof(Node));
    strcpy(node->name, name);
    node->firstChild = NULL;
    node->nextSibling = NULL;
    return node;
}

void addChild(Node *parent, Node *child) {
    if (parent->firstChild == NULL) {
        parent->firstChild = child;
    } else {
        Node *temp = parent->firstChild;
        while (temp->nextSibling != NULL)
            temp = temp->nextSibling;
        temp->nextSibling = child;
    }
}

void levelOrder(Node *root) {
    Node *queue[20];
    int front = 0, rear = 0;

    if (root == NULL)
        return;

    queue[rear++] = root;
    printf("Level-order traversal:\n");

    while (front < rear) {
        Node *current = queue[front++];
        printf("%s ", current->name);

        Node *child = current->firstChild;
        while (child != NULL) {
            queue[rear++] = child;
            child = child->nextSibling;
        }
    }
    printf("\n");
}

int main(void) {
    Node *CEO = createNode("CEO");
    Node *HR = createNode("HR");
    Node *Finance = createNode("Finance");
    Node *IT = createNode("IT");
    Node *Development = createNode("Development");
    Node *Testing = createNode("Testing");
    Node *Frontend = createNode("Frontend");
    Node *Backend = createNode("Backend");

    addChild(CEO, HR);
    addChild(CEO, Finance);
    addChild(CEO, IT);
    addChild(IT, Development);
    addChild(IT, Testing);
    addChild(Development, Frontend);
    addChild(Development, Backend);

    printf("ORGANISATIONAL HIERARCHY\n");
    printf("------------------------\n");
    levelOrder(CEO);

    return 0;
}
