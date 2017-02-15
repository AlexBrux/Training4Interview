#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//Largest Sum Contiguous Subarray

int main (int argc , char *argv[] )
{
	
	int n = 0 ;
	int ii =0 , jj = 0;
	
	for (ii=0; argv[1][ii] !='\0' ;ii++)
		n = n*10 + ( argv[1][ii] - '0' ) ;
		
/*	char *line=NULL;size_t size = 0;
	int c = 1 ;
	if( (c=getline(&line, &size, stdin)) > 0) 
		getline(NULL, NULL, stdin);	


	int list[128];
	
	for (ii=0; ii < c-1 ;ii++){
		
		if ( (line+ii) !=',' ){ 
			//list[jj] = list[jj]*10 + (int)((line+ii) -'0') ;
			printf ("##%c-", *(line+ii) - '0' );
//			printf ("%d", list[jj] );
		}
		jj++;
	}
*/
	int list[] = {-1,-110,-1,4,53,11,10,-100, 1000, -1};
	int siz = sizeof(list) / sizeof (int); 	 
	printf ("\nsiz=%d\n", siz );

	int ba=0, bb=siz, suma=0, sumb=0, flag=1;


	for (ii = 0 ; ii < siz ; ii++ ){
		suma+=(list[ii]);		
		
		if (suma < 0   ) {
			suma = 0 ;
		}
		
		if ( list[ii]>0 && flag==1   ){
			ba=ii;flag=0; 
		}
		
		if (suma > sumb){
			sumb = suma ;
			flag=0;
			bb=ii;
		}else{
			flag=1;		
		}
	}

	for (ii = ba  ; ii <= bb ; ii++ )printf("%d;",list[ii]); 

	printf("\nba=%d sumb=%d bb=%d\n", ba, sumb , bb);

	return 0;
}

