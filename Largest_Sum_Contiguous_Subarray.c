#include <stdio.h>
//Largest Sum Contiguous Subarray

int main (int argc , char *argv[] )
{
	
	int n = 0 ;
	int ii =0 , jj = 0;
	
	for (ii=0; argv[1][ii] !='\0' ;ii++)
		n = n*10 + ( argv[1][ii] - '0' ) ;
		
	char *line=NULL;size_t size = 0;
	int c = 1 ;
	if( (c=getline(&line, &size, stdin)) > 0) 
		getline(NULL, NULL, stdin);	
/*
	char *list[128];
	
	for (ii=0; *(line+ii) !='\n' ;ii++){
		
		if ( *(line+ii) !=',' ){ 
			//strcat ( list[jj] , *(line+ii) ) ;
			printf ("%s", (line+ii) );
		}else{
			jj++;
			//printf ("%s", list[jj] );
		}
	}
*/
	return 0;
}
