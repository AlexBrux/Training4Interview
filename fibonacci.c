#include <stdio.h>

long fibo(int n){

	if (n <= 1) 
		return n;
	else
		return fibo(n-1) + fibo(n-2); 
}

// f(n) = f(n-1) + f(n-2)

void fibo_it(int n){
	 
	int ii = 0 , n0 = 1  , n1=1 , n2=0 , tmp = 0 ; 
		if (ii == 0) { printf("0-") ;  }
		if (ii == 1) { printf("1-0-") ; return ; }

	for (ii = 0; ii < n ; ii++) {
		n0=n1+n2;
		printf("%d-", n0 ); 
		tmp = n0; 
		n2 = n1 ; 
		n1 = n0 ; 
		n0 = tmp;
	}

	printf("\n");

	return ;
}

void main (void *argc, void *argv[] ){

	int n =  atoi( argv[1] ) ; 

	while (n>=0) {
		printf("%ld-", fibo(n)  );
                n-- ;
	}
	
	printf ("\n") ; 
       
	fibo_it(atoi(argv[1]));

	return; 
}
