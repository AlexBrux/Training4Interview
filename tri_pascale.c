#include<stdio.h>
#include<malloc.h>

/*

1
1  1
1  2  1
1  3  3  1
1  4  6  4  1
1  5 10  10 5 1
1  6 15  20 15 6 1

*/

int main( int argc, char *argv[] ){

	int aa=0, n = 0 , size = 0;
	
	for ( aa = 0 ; argv[1][aa]!='\0' ; ++aa)
		n = (int)(n*10 + (argv[1][aa] - '0' )) ;
	
	int **mat = (int **) malloc ( n * sizeof (int*) );
	for (int i=0; i<n; i++)
		mat[i] = (int *)malloc( n * sizeof(int));

	for ( int ii=0 ; ii < n ; ii++ )
	{
		size = ii + 1 ;
		for (int jj = 0; jj < size ; jj++ ) {
			if (jj == 0 || jj == size - 1 ) {
				mat[ii][jj] = 1 ;
			}else{
				mat[ii][jj] = mat[ii-1][jj-1] + mat[ii-1][jj];
			}
			printf ("%d ", mat[ii][jj]);
		}
		printf ("\n");
	}

	return 0;
}

