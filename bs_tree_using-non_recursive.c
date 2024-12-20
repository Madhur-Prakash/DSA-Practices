#include <stdio.h>
#include <stdlib.h>

// Define structure of a node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;}

// Function for non-recursive in-order traversal
void inOrder(struct Node* root) {
    if (root == NULL) return;
    struct Node* stack[100];  // Assume maximum tree height is less than 100
    int top = -1;
    struct Node* current = root;
    while (current != NULL || top >= 0) {
        // Reach the left most node of the current node
        while (current != NULL) {
            stack[++top] = current;
            current = current->left;}
        // Current must be NULL at this point, so we pop from the stack
        current = stack[top--];
        printf("%d ", current->data);
        // We have visited the node and its left subtree, now move to the right subtree
        current = current->right;}}

// Function for non-recursive pre-order traversal
void preOrder(struct Node* root) {
    if (root == NULL) return;
    struct Node* stack[100];  // Assume maximum tree height is less than 100
    int top = -1;
    stack[++top] = root;
    while (top >= 0) {
        // Pop the top item from stack and print it
        struct Node* current = stack[top--];
        printf("%d ", current->data);
        // Push right and left children of the popped node to stack
        if (current->right)
            stack[++top] = current->right;
        if (current->left)
            stack[++top] = current->left;}}

// Function for non-recursive post-order traversal
void postOrder(struct Node* root) {
    if (root == NULL) return;
    struct Node* stack[100];  // Stack for simulation
    int top = -1;
    struct Node* current = root;
    struct Node* lastVisited = NULL;
    while (current != NULL || top >= 0) {
        // Reach the leftmost node
        while (current != NULL) {
            stack[++top] = current;
            current = current->left;}
            current = stack[top];
            if (current->right == NULL || current->right == lastVisited) {
            printf("%d ", current->data);
            top--;  // Pop the node
            lastVisited = current;  // Mark the node as visited
            current = NULL;}else{
            current = current->right;}}}  // Visit the right child

// Main function to test the traversals
int main() {
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->right = newNode(6);
    printf("In-order traversal (Non-Recursive):\n");
    inOrder(root);
    printf("\nPre-order traversal (Non-Recursive):\n");
    preOrder(root);
    printf("\nPost-order traversal (Non-Recursive):\n");
    postOrder(root);
    return 0;}
