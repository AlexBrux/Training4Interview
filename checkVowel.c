#include <stdio.h>


int checkVowel(char a){

	switch (a){
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		case 'y':
		case 'Y':
			return 1;
		default: 
			return 0;
		}

	return -1;
}

void main(){
	
	char a=' ';
	
	printf("I'm waiting 1 char\n");
	scanf("%c", &a);
	printf("Ok I got : %c \n", a);
	
	printf("%s\n", checkVowel(a) ? "It is a vowel !" : "It is NOT a vowel !");

	return;
}
