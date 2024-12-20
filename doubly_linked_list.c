#include <stdio.h>
#include <stdlib.h>

// Node structure for the doubly linked list
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;};
// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;}
// Append node to the end (Creation)
void append(struct Node** head_ref, int data) {
    struct Node* newNode = createNode(data);
    struct Node* last = *head_ref;

    if (*head_ref == NULL) {
        *head_ref = newNode;
        return;}
        while (last->next != NULL) {
        last = last->next;}
        last->next = newNode;
    newNode->prev = last;}
// Display the list
void display(struct Node* node) {
    if (node == NULL) {
        printf("List is empty.\n");
        return;}
        while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;}
        printf("\n");}
// Insert a node after a given node
void insertAfter(struct Node* prev_node, int data) {
    if (prev_node == NULL) {
        printf("Previous node cannot be NULL.\n");
        return;}
    struct Node* newNode = createNode(data);
    newNode->next = prev_node->next;
    prev_node->next = newNode;
    newNode->prev = prev_node;
    if (newNode->next != NULL) {
        newNode->next->prev = newNode;}}
// Delete a node from the list
void deleteNode(struct Node** head_ref, struct Node* del) {
    if (*head_ref == NULL || del == NULL) {
        return;}
        if (*head_ref == del) {
        *head_ref = del->next;}
        if (del->next != NULL) {
        del->next->prev = del->prev;}
        if (del->prev != NULL) {
        del->prev->next = del->next;}
        free(del);}
// Search for a node in the list
struct Node* search(struct Node* head, int key) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == key) {
            return current;}
        current = current->next;}
    return NULL;}

int main() {
    struct Node* head = NULL;
// Creation (appending nodes)
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);
    printf("Doubly Linked List: ");
    display(head);
// Insertion
    struct Node* second = head->next;
    insertAfter(second, 25);
    printf("After inserting 25 after 20: ");
    display(head);
// Deletion
    deleteNode(&head, second);
    printf("After deleting node 20: ");
    display(head);
// Searching
    int key = 30;
    struct Node* search_result = search(head, key);
    if (search_result != NULL) {
        printf("Element %d found in the list.\n", key);} else {
        printf("Element %d not found in the list.\n", key);}
        return 0;}
