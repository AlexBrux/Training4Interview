#include <stdio.h>

int pgcd(int a, int b){
	
	int c =0, tmp=0;

	if (a < b) {
		tmp = a; 
		a = b  ; 
		b = tmp;
	} 

	do{
		c=a%b;
		a=b;
		b=c;	
	}while ( c != 0 );

	return a;
}

void main(){
	
	int a=0, b=0, ppcm;
	
	printf("I'm waiting 2 int \n");
	scanf("%d %d", &a, &b);
	printf("Ok I got : %d %d \n", a, b);
	
	printf ("PGCD : %d\n", pgcd(a,b)     );
	if (ppcm = (a*b/pgcd(a,b)) > 0)
		printf ("PPCM : %d\n", a*b/pgcd(a,b) );

	return;
}
