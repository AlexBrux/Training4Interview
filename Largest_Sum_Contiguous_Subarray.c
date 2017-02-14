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
		
	char *line=NULL;size_t size = 0;
	int c = 1 ;
//	if( (c=getline(&line, &size, stdin)) > 0) 
//		getline(NULL, NULL, stdin);	
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
	int list[] = {4,53,8,22,-10,5,-42,8,59,-8,-14,-19,-15, 45, 34, 29, 19,-100};
	int siz = sizeof(list) / sizeof (int); 	 
	printf ("siz=%d\n", siz );
	int ba=0, bb=siz, suma=0, sumab=0, sumb=0, ma=0, mb=0;

	for ( ii = 0 ; ii < siz/2 ; ii ++){
                if ( abs( list[ii] - list [ii + 1]) > ma ){
			ba = ii; ma = abs( list[ii] - list [ii + 1]);}
			
		if ( abs( list[siz - ii] - list [siz - ii - 1]) > mb ){
			bb = siz- ii; mb = abs( list[siz - ii] - list [siz - ii - 1]) ;}
	}
	printf ("ba=%d\n", ba );
	printf ("ma=%d\n", ma );
	printf ("bb=%d\n", bb );
	printf ("mb=%d\n", mb );


	for (ii = 0 ; ii < ba  ; ii++ )
		suma+=(list[ii]);

	for (ii = ba ; ii < bb ; ii++ )
		sumab+=(list[ii]);
	
	for (ii = bb ; ii < siz ; ii++ )
		sumb+=(list[ii]);

	printf ("suma=%d\n", suma );
	printf ("sumab=%d\n", sumab );
	printf ("sumb=%d\n", sumb );

	if (suma > sumab && suma> sumb){
		for (ii = 0 ; ii < ba  ; ii++ )printf("%d;",list[ii]);					
	}else if (sumab > sumb ){
		for (ii = ba ; ii < bb ; ii++ )printf("%d;",list[ii]); 
	}else{
		for (ii = bb ; ii < siz ; ii++ )printf("%d;",list[ii]);
        }
	printf("\n");

	return 0;
}

