#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

typedef struct Node {
    char name[MAX];
    struct Node *firstChild;
    struct Node *nextSibling;
} Node;

Node* createNode(const char *name) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->name, name);
    newNode->firstChild = NULL;
    newNode->nextSibling = NULL;
    return newNode;
}

void addChild(Node *parent, Node *child) {
    if (parent->firstChild == NULL) {
        parent->firstChild = child;
    } else {
        Node *temp = parent->firstChild;
        while (temp->nextSibling != NULL) {
            temp = temp->nextSibling;
        }
        temp->nextSibling = child;
    }
}

void levelOrder(Node *root) {
    Node *queue[20];
    int front = 0, rear = 0;

    if (root == NULL)
        return;

    queue[rear++] = root;

    printf("\nLevel-order traversal:\n");

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

int linearSearch(char arr[][MAX], int n, const char *key,
                 int *comparisons) {
    *comparisons = 0;

    for (int i = 0; i < n; i++) {
        (*comparisons)++;
        if (strcmp(arr[i], key) == 0)
            return i;
    }

    return -1;
}

int binarySearch(char arr[][MAX], int n, const char *key,
                 int *comparisons) {
    int low = 0;
    int high = n - 1;

    *comparisons = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        (*comparisons)++;

        if (strcmp(arr[mid], key) == 0)
            return mid;

        if (strcmp(key, arr[mid]) < 0)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

int main() {
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

    char departments[8][MAX] = {
        "Backend",
        "CEO",
        "Development",
        "Finance",
        "Frontend",
        "HR",
        "IT",
        "Testing"
    };

    int n = 8;
    int comparisons;
    int position;

    char searches[3][MAX] = {
        "Development",
        "HR",
        "Testing"
    };

    printf("\nSEARCH COMPARISON RESULTS\n");
    printf("--------------------------\n");

    printf("%-15s %-15s %-15s\n",
           "Department", "Linear Search", "Binary Search");

    for (int i = 0; i < 3; i++) {
        position = linearSearch(
            departments, n, searches[i], &comparisons);

        int linearComparisons = comparisons;

        position = binarySearch(
            departments, n, searches[i], &comparisons);

        int binaryComparisons = comparisons;

        printf("%-15s %-15d %-15d\n",
               searches[i],
               linearComparisons, binaryComparisons);
    }

    return 0;
}
