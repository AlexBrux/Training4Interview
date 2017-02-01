#include <stdio.h>
#include <stdlib.h>

/*
Print Fizz if it is divisible by 3 
* and it prints Buzz if it is divisible by 5. 
* It prints FizzBuzz if it is divisible by both. 
* Otherwise, it will print the numbers between 0 and 100.
*/

void isfizzBuzz(int* list, int size){
	int ii = 0, f=0 , b=0;
	
	for (ii = 0; ii < size ; ii++)
	{
		if((f=list[ii]%3)==0 )
			printf("FIZZ");
		if((b=list[ii]%5)==0)
			printf("BUZZ");
		
		if( b!=0 && f!=0 ) 
			printf("%d", list[ii]);

		printf("-");
	}		
	printf("\n");
	return;
}


void isfizzBuzz2(int* list, int size){
	int ii = 0, f=0 , b=0;
	
	for (ii = 0; ii < size ; ii++)
	{
			int r=printf("%s%s", list[ii]%3?"":"FIZZ" , list[ii]%5?"":"BUZZ" );
			if(r==0)printf("%d", list[ii]);
			printf("-");
	}		
	printf("\n");
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
	isfizzBuzz2(list,T);
	
	return;
}
