#include <stdio.h> //stack de eleman ekleme çýkarma dizi ile
#define BOYUT 5

int dizi[BOYUT],top;//top indis dizi[top] deðer döner

void push( int veri){//eleman ekleme iþlemi
	
	if(top + 1 == BOYUT){
		printf("Stack dolu");
	}
	else{
		top+=1;
		dizi[top] = veri;
	}
}

void pop(){//eleman çýkarma
	if(top == -1){
		printf("Stack zaten bos");
	}
	else{
		top-=1;
	}
}

int peek(){
	return dizi[top];
}

void yazdir(){
	int i;
	for(i=0;i<=top;i++){
		printf("%d ",dizi[i]);
	}
	printf("==> TOP");
}

int main(){
	
	top = -1;
	int secim;
	while(1==1){

		printf("\n1-Push");
		printf("\n2-Pop");
		printf("\n3-Peek");
		printf("\nSeciminiz nedir: ");
		scanf("%d",&secim);
		switch(secim){
		
			case 1:
				printf("\n Bir sayi giriniz:");
				scanf("%d",&secim);
				push(secim);
				yazdir();
				break;
			case 2:
				pop();
				yazdir();
				break;
			case 3:
				printf("\nTop degeri => %d",peek());
				break;
		}
	}
	return 0;
}
