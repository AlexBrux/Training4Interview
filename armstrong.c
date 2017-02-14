#include <stdio.h>
#include <math.h>

int main (int argc , void *argv[] )
{

	char *pn = argv[1] ;
	int ipn[64] = {0} ;
	int ii = 0 , arms = 0; 

	while ( *(pn + ii) != '\0' )
	{
		ipn[ii] = *(pn + ii) - '0' ;
		arms += pow ( ipn[ii],3 ) ;
		printf("%d-%d-%d ; ", ipn[ii],(int)pow( ipn[ii],3 ),arms);
		ii++;
	}

	printf("%d\n", arms);

	return 0;
}
