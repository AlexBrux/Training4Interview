#include <stdio.h>
#include <stdlib.h>


int main (int arcg, char** argv ){

	
		int mata[3][3];
		int matc[3][3];
		int ii, jj, sum;
			for(ii =0 ; ii < 3 ; ii++)
				for( jj =0 ; jj < 3 ; jj++)
					mata[ii][jj] = ii+jj;
					
		int matb[3][3];
			for( ii =0 ; ii < 3 ; ii++)
				for( jj =0 ; jj < 3 ; jj++)
					matb[ii][jj] = ii*jj;
					
		for( int cc = 0 ; cc < 3 ; cc++){	
			for( ii =0 ; ii < 3 ; ii++){
				for( jj =0 ; jj < 3 ; jj++){
					sum = sum + mata[cc][jj] * matb[jj][ii];
				}
				matc[cc][ii] = sum ;
				sum = 0 ;
			}			
		}
			
					
		for( ii =0 ; ii < 3 ; ii++){
			printf("{");
			for( jj =0 ; jj < 3 ; jj++)
				printf("%d,",mata[ii][jj]);
			
			printf("}\n");
		}

	printf("\n");
	
		for( ii =0 ; ii < 3 ; ii++){
			printf("{");
			for( jj =0 ; jj < 3 ; jj++)
				printf("%d,",matc[ii][jj]);
			
			printf("}\n");
		}
	return 0;
}


