//¿¬»ê 2
#include<stdio.h>
#include<stdlib.h>

typedef int element;
typedef struct ListNode {
	element data;
	struct ListNode *link;
}ListNode;

ListNode* insertLastNode(ListNode *head,element value){
	ListNode *temp;
	ListNode *p=(ListNode *)malloc(sizeof(ListNode));
	p->data=value;
	p->link=NULL;
	temp=head;
	while(temp->link !=NULL)
		temp=temp->link;
	temp->link=p;
	return head;
}
ListNode* insert_first(ListNode *head,element value){
	ListNode *p=(ListNode *)malloc(sizeof(ListNode));
	p->data=value;
	p->link=head;
	head=p;
	return head;
}
void display(ListNode *head){
	ListNode *p = head;
	for(p=head; p != NULL; p=p->link)
	printf("%d -> ",p->data);
	printf("NULL\n");
}
main(void){
	ListNode *head=NULL;
	head=insert_first(head,10);
	head=insert_first(head,20);
	display(head);
	head=insertLastNode(head,50);
	display(head);
}
