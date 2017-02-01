#include <stdio.h>
#include <stdlib.h>


void bubblesort(int* list, int size){
	int ii = 0, jj=0, tmp=0;
	
	for (ii = 0; ii < size ; ii++)
	{
		for (jj = 0; jj < size-ii-1 ; jj++)
		{	
			if( list[jj]>list[jj+1] ){
				tmp = list[jj+1];
				list[jj+1] = list[jj] ;
				list[jj] = tmp;
			}
		}		
	}		

	return;
}

void main(){

	int ii=0, T=0;
	printf("I'm waiting 1 int for nb element i list\n");
	scanf("%d", &T);
	
	int *list= (int*)malloc(T*sizeof(int));
	srand((unsigned)time(NULL));
	
	for (ii = 0; ii < T ; ii++)
	{
		list[ii]=rand()%100;
		printf("%d-",list[ii]);
	}
	
	printf("\n");
	bubblesort(list,T);

	for (ii = 0; ii < T ; ii++)
	{
		printf("%d-",list[ii]);
	}
	
	printf("\n");		
	return;
}
