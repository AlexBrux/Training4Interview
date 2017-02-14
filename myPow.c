#include<stdio.h>
 
int myPow (int a, int exp){

	while(exp-1>0){
		a *= a;
		exp--;
	}

	return a ;
}


int main (int argc, char *argv[])
{
	int aa=0, ii = 0;
	int exp = 0;

	for(ii = 0 ; argv[1][ii] != '\0' ; ii++)
		aa =  aa*10  + (int)( argv[1][ii] - '0' );

	for(ii = 0 ; argv[2][ii] != '\0' ; ii++)
		exp = exp*10 + (int)( argv[2][ii] - '0' ) ;

	printf ("\n	%d^%d=%d\n", aa,exp, myPow(aa,exp) );

	return 0;
}

