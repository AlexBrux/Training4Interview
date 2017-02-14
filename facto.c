#include <stdio.h>

void main (int *argc , void *argv[] )
{
	int n = atoi (argv[1]) ;//= (int)(argv[1] - '0');
	int ii = 0 , np =1;
	
	printf("%d - %d \n", n, ii);
		
	for(ii = n ; ii -2>0 ; ii-=2 )
		 np  *= ii*(ii-1);
	
	printf("\n%d - %d \n", np, ii);

	return;
}
