#include <stdio.h>// ikili arama aðacý
#include <stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
}; 

struct node* root =NULL;

struct node* newNode(int key){
	
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=key;
	temp->left=NULL;
	temp->right=NULL;
	
	if(root==NULL)
		root=temp;
	return temp;	
};

void inorder(struct node *root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
}
struct node* ekle(struct node* node,int key){
	if(node==NULL)
		return newNode(key);
	if(key<node->data)
		node->left=ekle(node->left,key);
	else if(key>node->data)
		node->right=ekle(node->right,key);
	return node;
}

int main(){
	int secim;
	while(1==1){
		printf("\n1-Sayi ekle");
		printf("\n1-Inorder traversal");
		printf("\nSeciminizi yapiniz->");
		scanf("%d",&secim);
		switch(secim){
			case 1:
				printf("\nGirmek istediginiz sayi->");
				scanf("%d",&secim);
				ekle(root,secim);
				break;
			case 2:
				inorder(root);
				break;
		}
	}
	
	return 0;
}
