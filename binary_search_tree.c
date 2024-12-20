#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
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

// Function to insert a node in BST
struct Node* insert(struct Node* node, int data) {
    if (node == NULL) return newNode(data);
    if (data < node->data)
        node->left = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);
    return node;}

// ****************without recursion******************
// void insert(struct node *root, int key){
//    struct node *prev = NULL;
//    while(root!=NULL){
//        prev = root;
//        if(key==root->data){
//            printf("Cannot insert %d, already in BST", key);
//            return;}
//        else if(key<root->data){
//            root = root->left;}
//        else{
//            root = root->right;}}
//    struct node* new = newNode(key);
//    if(key<prev->data){
//        prev->left = new;}
//    else{
//        prev->right = new;}}


// Function to find the minimum value node (in-order successor)
struct Node* minValueNode(struct Node* node) {
    struct Node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;}

// Function to delete a node in the BST
struct Node* deleteNode(struct Node* root, int data) {
    if (root == NULL) return root;

    // If the data to be deleted is smaller than the root's data, it lies in the left subtree
    if (data < root->data)
        root->left = deleteNode(root->left, data);
    // If the data to be deleted is greater, it lies in the right subtree
    else if (data > root->data)
        root->right = deleteNode(root->right, data);
    // If the data is the same as root's data, this is the node to be deleted
    else {
        // Case 1: Node with only one child or no child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;} else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;}
        // Case 2: Node with two children: Get the in-order successor (smallest in the right subtree)
        struct Node* temp = minValueNode(root->right);

        // Copy the in-order successor's content to this node
        root->data = temp->data;

        // Delete the in-order successor
        root->right = deleteNode(root->right, temp->data);}
        return root;}

// In-order traversal of the tree
void inOrder(struct Node* root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);}}

// Main function to test the code
int main() {
    struct Node* root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    printf("In-order traversal of the given tree:\n");
    inOrder(root);
    printf("\n\nDelete 20\n");
    root = deleteNode(root, 20);
    printf("In-order traversal after deletion:\n");
    inOrder(root);
    printf("\n\nDelete 30\n");
    root = deleteNode(root, 30);
    printf("In-order traversal after deletion:\n");
    inOrder(root);
    printf("\n\nDelete 50\n");
    root = deleteNode(root, 50);
    printf("In-order traversal after deletion:\n");
    inOrder(root);
    return 0;}
