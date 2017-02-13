#include <stdio.h>

long fibo(int n){

	if (n <= 1) 
		return n;
	else
		return fibo(n-1) + fibo(n-2); 
}

// f(n) = f(n-1) + f(n-2)

void main (void *argc, void *argv[] ){

	int n =  atoi( argv[1] ) ; 

	while (n>=0) {
		printf("%ld-", fibo(n)  );
                n-- ;
	}
	
	printf ("\n") ; 
	return; 
}
