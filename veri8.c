#include <stdio.h>//stack iþlemleri linked list ile
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node* top = NULL;

void push(int veri){
	struct node* eklenecek = (struct node*)malloc(sizeof(struct node));
	eklenecek->data = veri;
	eklenecek->next = NULL;
	if(top != NULL)
		eklenecek->next = top;
	top = eklenecek;
	
}
void pop(){
	
	if(top->data == NULL){
		printf("Stack zaten bos");
	}
	else{
		struct node* temp;
		temp=top;
		top=top->next;
		free(temp);
	}
}
int peek(){
	return top->data;
}
void yazdir(){
	struct node* q;
	q=top;
	printf("\n");
	while (q!=NULL){
		printf("%d => ",q->data);
		q=q->next;
	}
	printf("NULL ");
}

int main(){
	int secim;
	while(1==1){
		printf("\n1- PUSH");
		printf("\n2- POP");
		printf("\n3- PEEK");
		printf("\n Yapmak istediginiz islem?");
		scanf("%d",&secim);
		switch(secim){
			case 1:
				printf("\nGirmek istediginiz sayi nedir");
				scanf("%d",&secim);
				push(secim);
				yazdir();
				break;
			case 2:
				pop();
				yazdir();
				break;
			case 3:
				printf("top elemani =>  %d",peek());
				break;
		}
	}
	
}
