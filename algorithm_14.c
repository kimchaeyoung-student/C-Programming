#include<stdio.h>
#include<stdlib.h>

typedef int element;
typedef struct ListNode {
   element data;
   struct ListNode *link;
   
}ListNode;

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
	printf("NULL \n");
}
main(void){
	ListNode *head=NULL;
	head=insert_first(head,10);
	head=insert_first(head,20);
	display(head);
}

