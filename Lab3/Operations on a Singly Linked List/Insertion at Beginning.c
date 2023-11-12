#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
void linkedlisttraversal(struct node *ptr){
	while(ptr!=NULL){
		printf("%d, ", ptr->data);
		ptr=ptr->next;
	}
}
struct node* insertatbegin(struct node* head, int data){
	struct node *ptr=(struct node *) malloc(sizeof(struct node));
	ptr->data=data;
	ptr->next=head;
	return ptr;
}
int main(){
	struct node *head;
	struct node *second;
	struct node *third;
	
	head=(struct node*) malloc(sizeof(struct node));
	second=(struct node*) malloc(sizeof(struct node));
	third=(struct node*) malloc(sizeof(struct node));
	
	head->data=7;
	head->next=second;
	
	second->data=9;
	second->next=third;
	
	third->data=11;
	third->next=NULL;
	
	printf("Initial Linked List: ");
	linkedlisttraversal(head);
	
	head=insertatbegin(head, 57);
	printf("\nAfter Inserting a Node at Beginning: ");
	linkedlisttraversal(head);
	
	return 0;
}
