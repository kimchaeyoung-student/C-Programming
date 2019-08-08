#include<stdio.h>
#include<stdlib.h>
typedef int element;
typedef struct TreeNode{
	element key;
	struct TreeNode *left, *right;
	int is_thread;
} TreeNode;

//��ȯ���� Ž�� �Լ�;
TreeNode *search(TreeNode *node, int key){
	if(node == NULL) return NULL;
	if(key == node->key) return node;
	else if(key<node->key)
		return search(node->left, key);
	else
		return search(node->right, key);
} 

TreeNode * new_node(int item){
	TreeNode *temp = (TreeNode *)malloc(sizeof(TreeNode));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

TreeNode * insert_node(TreeNode * node, int key){
	//Ʈ���� �����̸� ���ο� ��带 ��ȯ�Ѵ�.
	if(node==NULL)
		return new_node(key);
	//�׷��� ������ ��ȯ������ Ʈ���� ��������. 
	if(key<node->key)
		node->left = insert_node(node->left, key);
	else if(key>node->key)
		node->right = insert_node(node->right, key);
	//����� ��Ʈ �����͸� ��ȯ�Ѵ�.
	return node; 
}

TreeNode * min_value_node(TreeNode * node){
	TreeNode * current = node;
	//�� ���� �ܸ� ��带 ã���� ������.
	while(current->left != NULL)
		current =  current->left;
	return current;
}

void inorder(TreeNode * root){
	if(root){
		inorder(root->left);	//���ʼ���Ʈ�� ��ȸ
		printf("[%d] ", root->key);	//��� �湮
		inorder(root->right);	//�����ʼ���Ʈ�� ��ȸ 
	}
}

int main(void){
	TreeNode * root = NULL;
	TreeNode * tmp = NULL;
	root = insert_node(root, 30);
	root = insert_node(root, 20);
	root = insert_node(root, 10);
	root = insert_node(root, 40);
	root = insert_node(root, 50);
	root = insert_node(root, 60);
	printf("���� Ž�� Ʈ�� ���� ��ȸ ��� \n");
	inorder(root);
	printf("\n\n");
	
} 
