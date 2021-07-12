#include<stdio.h>
#include<stdlib.h>

struct node{
	int val;
	struct node *next;
};
void displayll(struct node *root){
	struct node *temp = root;
	printf("\nLinkedList: ");
	while(temp!=NULL){
		printf("%d -> ",temp->val);
		temp = temp->next;
	}
	printf("NULL\n\n");
}

struct node* insert_sortedll(node *head, int val){
	
	struct node *ptr;
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->val = val;
	temp->next = NULL;
	
	if(head==NULL){
		head = temp;	
	}
	else if(temp->val <= head->val){
		temp->next = head;
		head = temp;
	}
	else{
		ptr = head;
		while(ptr->next!=NULL&&ptr->next->val<temp->val){
			ptr = ptr->next;
		}
		temp->next = ptr->next;
		ptr->next = temp;
	}
	
	return head;
	
}

int main() {

	struct node *head = NULL;
	
	printf("Insert 8 into the LinkedList !!!\n");
	head = insert_sortedll(head, 8);
	printf("Insert 4 into the LinkedList !!!\n");
	head = insert_sortedll(head, 4);
	printf("Insert 12 into the LinkedList !!!\n");
	head = insert_sortedll(head, 12);
	
	displayll(head);
	
	printf("Insert 1 into the LinkedList !!!\n");
	head = insert_sortedll(head, 1);
	printf("Insert 3 into the LinkedList !!!\n");
	head = insert_sortedll(head, 3);
	printf("Insert 10 into the LinkedList !!!\n");
	head = insert_sortedll(head, 10);

	displayll(head);

}