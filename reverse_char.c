#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void charReversed (  )
{
	int ii=0, jj=0;
	int len = 0;
	int size = 5;
	char tmp = '0';

	char clist[5][5]= {"abcd","efgh", "ijkl","mnop", "qrst"};
	
	for(ii=0; ii < 5 ; ii++)
		printf("%s\n", clist[ii]);
				
				
	for(ii = 0 ; ii < size ; ii++){
		len = strlen ( clist[ii] );
			//printf("%d\n", len );	
		while(jj  <  len/2 ){
			tmp = clist[ii][jj] ; 
			clist[ii][jj] = clist[ii][len-jj-1] ;
			clist[ii][len-jj-1] = tmp ;
			jj++;
		}
		jj=0;
	}

	printf("\n=============\n");
	
	
	for(ii=0; ii < 5 ; ii++)
		printf("%s\n", clist[ii]);

	return ;
}

int main(int argc , char *argv[])
{
	
	int ii = 0, aa=0 , jj=0;

//	char clist[5][5]={"abcd","efgh", "ijkl","mnop", "qrst"};


	printf("\n=============\n");	
/*	for(ii=0; ii < 5 ; ii++)		
			printf("%s\n", clist[ii]);*/
			
	charReversed ( );
	


	printf("\n=============\n");	
	return 0;	
}

