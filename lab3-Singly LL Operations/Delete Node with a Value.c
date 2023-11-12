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
struct node *deleteNodeWithValue(struct node *head, int value){
	struct node *p=head;
	struct node *q=head->next;
	
	while(q->data!=value && q->next!=NULL){
		p=p->next;
		q=q->next;
	}
	if(q->data==value){
		p->next=q->next;
		free(q);
	}
	else{
		printf("\nValue Not Found on Linked List");
	}
	return head;
}
int main(){
	struct node *head;
	struct node *second;
	struct node *third;
	struct node *fourth;
	
	head=(struct node*) malloc(sizeof(struct node));
	second=(struct node*) malloc(sizeof(struct node));
	third=(struct node*) malloc(sizeof(struct node));
	fourth=(struct node*) malloc(sizeof(struct node));
	
	head->data=7;
	head->next=second;
	
	second->data=9;
	second->next=third;
	
	third->data=11;
	third->next=fourth;
	
	fourth->data=13;
	fourth->next=NULL;
	
	printf("Initial Linked List: ");
	linkedlisttraversal(head);
	
	head=deleteNodeWithValue(head, 11);
	printf("\nAfter Deleting a node at a specific index: ");
	linkedlisttraversal(head);
	return 0;
}
