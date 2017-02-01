#include <stdio.h>


void swap(int* a, int* b){
	int tmp=0;

	tmp = *b;
	*b = *a ;
	*a = tmp;

	return;
}

void main(){
	
	int a=0,b=0;
	
	printf("I'm waiting 2 int separated by space : \n");
	scanf("%d %d", &a, &b);
	printf("Ok I got : %d %d\n", a, b);
	
	swap(&a, &b);
	
	printf("And I swap : %d %d\n", a, b);
	
	return;
}
