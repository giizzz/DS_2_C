#include <stdio.h> //kuyruk first in first out
#define SIZE 5

int que[SIZE],front = -1,rear= -1;//front en öndeki rear en arkadaki elemaný tutar

void enOueue(int data){
	
	if(rear==SIZE-1){
		printf("\nOverflow\n");
	}
	else{
		if(front == -1)
			front=0;
		rear =rear+1;
		que[rear]=data;
		
	}
}

void deQueue(){
	
	if(front==-1 || front>rear){
		
		printf("\nUnderflow\n");
		front=-1;// kuyruk tamamen boþaldýktan sonra sýkýntý çýkmamasý için
		rear=-1;
	}
	else{
		front=front+1;
	}
}

void display(){
	int i;
	
	for(i=front; i<=rear ;i++){
		
		printf("%d ",que[i]);
	}
}

int main(){
	int choice;
	while(1){
		printf("\n1- enQueue");
		printf("\n2- deQueue");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("\nEnter data:");
				scanf("%d",&choice);
				enOueue(choice);
				display();
				break;
			case 2:
				deQueue();
				display();
				break;
			default:
				printf("Incorrect choice...");		
		}
	
	}
	return 0;
}
