#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){

	int ii=0;
	char* word = (char*)malloc(sizeof(char));
	
	printf("I'm waiting 1 word \n");
	scanf("%s", word);
	printf("I got %s\n", word);

	int len = strlen (word);
	
	do{
		printf("*(word+ii) = %c %d\n" , *(word+len-ii-1) , ii);
		if (*(word+ii)!=*(word+len-ii-1))
			break;			
		ii++;
	}while(ii < (len/2));
	
	if (ii==len/2 )
		printf("its a palindrome\n");
	else
		printf("its NOT a palindrome\n");

	return;
}
	
		
