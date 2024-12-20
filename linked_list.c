#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int data;
    struct node* next;};  

int count(struct node* ptr){
  int c=0;
  while(ptr!=NULL){
    ptr=ptr->next;
    c++;}
  printf("The number of nodes in the linked list are:-%d",c);
}

void linked_list(struct node* ptr){
    while(ptr!=NULL){
  printf("Element:%d\n", ptr->data);
    ptr=ptr->next;}}

struct node* insert_at_first(struct node* head,int data){
    struct node* ptr=(struct node*) malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    head=ptr;
    return head;
}    

struct node* deletee(struct node*head,int l){
    struct node* p=head;
    struct node* q=p->next;
    for(int i=0;i<l-1;i++){
        p=p->next;
        q=q->next;}
        p->next=q->next;
        free(q);
        return head;}

struct node* insert_between(struct node*head,int index,int data){
   struct node* ptr=(struct node*)malloc (sizeof(struct node));
   struct node* p=head;
   int i=0;
   while(i!=index-1){
    p=p->next;
    i++;
   }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
          
int main(){
  //linked list 
    struct node* head=NULL;
    int val,l,ch,size;
    printf("Enter the number of elemens in the linked list:-");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
      printf("Enter the element to be inserted:-");
      scanf("%d",&val);
      head=insert_at_first(head,val);}
  printf("Press 1 for inserting at start of the list\n");
  printf("Press 2 for inserting in between of the list\n");
  printf("Press 3 for deleting the element\n");
  printf("Press 4 for counting the number of nodes in the list\n");
  printf("Enter the choice:-");
  scanf("%d",&ch);
  if(ch==1){
  printf("The entered linked list is:-\n");
  linked_list(head);
  printf("Enter the value to be inserted:-");
  scanf("%d",&val);
  printf("Inserting element at first:-\n");
  head=insert_at_first(head,val);
  linked_list(head);}
  else if(ch==2){
  printf("The entered linked list is:-\n");
  linked_list(head);
  printf("Enter the position:-");
  scanf("%d",&l);
  if(l<0 || l>size-1){
    printf("Please enter a valid location\n");}else{
    printf("Enter the value to be inserted:-\n");
    scanf("%d",&val);
    printf("after inserting in-between:-\n");
    insert_between(head,l,val);
    linked_list(head);}}
  else if(ch==3){
  printf("The entered linked list is:-\n");
  linked_list(head);
  printf("Enter the index:-");
  scanf("%d",&l);
  printf("After deletion:-\n");
  deletee(head,l);
  linked_list(head);}
  else if(ch==4){
    count(head);}else{
    printf("Wrong choice entered");}}