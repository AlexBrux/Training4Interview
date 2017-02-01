#include <stdio.h>

void main(){
	
	int a=0,b=0,c=0;
	
	printf("I'm waiting 3 int separated by space : \n");
	scanf("%d %d %d", &a, &b, &c);
	printf("Ok I got : %d %d %d\n", a, b, c);
	
	if( a > b && a > c){
		printf("The first one is the greatest\n");
	}else if( b > c ){
		printf("The second one is the greatest\n");
	}else{
		printf("The third one is the greatest\n");
	}
	
	return;
}
