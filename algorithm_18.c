#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef char element[100];
typedef struct ListNode{
	element data;
	struct ListNode *link;
} ListNode;
typedef struct CListType{
	ListNode *head;
}CListType;
//리스트의 항목 출력
void print_list(CListType *L){
	ListNode *p;
	if(L->head ==NULL) return;
	p = L->head->link;
	do{
		printf("%s -> ", p->data);
		p = p->link;
	}
	while(p!=L->head);
	printf("%s -> ", p->data);	//마지막 노드 출력 
}

void insert_first(CListType* L, element data){
	ListNode *node = (ListNode *)malloc(sizeof(ListNode));
	strcpy(node->data, data);
	if(L->head==NULL){
		L->head=node;
		node->link = L->head;
	}
	else{
		node->link = L->head->link;
		L->head->link = node;
	}
}
//원형연결리스트 테스트 프로그램
int main(void){
	CListType list= {NULL};
	
	insert_first(&list,"KIM");
	insert_first(&list,"PARK");
	insert_first(&list,"CHOI");
	
	ListNode* p = list.head;
	int i;
	for(i=0;i<10;i++){
		printf("현재차례 : %s\n", p->data);
		p= p->link;
	}
} 
