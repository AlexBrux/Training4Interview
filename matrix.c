#include <stdio.h>
#include <stdlib.h>


int main (int arcg, char** argv ){

		int AR=3, AC=2, BR=3, BC=5;	
		int mata[AR][AC];
		int CR , CC;
		CR = AR ;
		CC = BC;

		int matc[CR][CC];
		int ii, jj, sum=0;
			for(ii =0 ; ii < AR ; ii++)
				for( jj =0 ; jj < AC ; jj++)
					mata[ii][jj] = ii+jj;
					
		int matb[BR][BC];
			for( ii =0 ; ii < BR ; ii++)
				for( jj =0 ; jj < BC ; jj++)
					matb[ii][jj] = ii*jj;
					
		for( int cc = 0 ; cc < AR ; cc++){	
			for( ii =0 ; ii < BC ; ii++){
				for( jj =0 ; jj < BR ; jj++){
					sum = sum + mata[cc][jj] * matb[jj][ii];
				}
				matc[cc][ii] = sum ;
				sum = 0 ;
			}			
		}
			
					
		for( ii =0 ; ii < AR ; ii++){
			printf("{");
			for( jj =0 ; jj < AC ; jj++)
				printf("%d,",mata[ii][jj]);
			
			printf("}\n");
		}

	printf("\n");
	
		for( ii =0 ; ii < BR ; ii++){
			printf("{");
			for( jj =0 ; jj < BC ; jj++)
				printf("%d,",matb[ii][jj]);
			
			printf("}\n");
		}
		
		for( ii =0 ; ii < CR ; ii++){
			printf("{");
			for( jj =0 ; jj < CC ; jj++)
				printf("%d,",matc[ii][jj]);
			
			printf("}\n");
		}
return 0;
}


