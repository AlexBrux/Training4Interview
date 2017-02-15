#include<stdio.h>
#include<stdlib.h>



float * char2float ( char **clist )
{
	int ii=0, jj=0;
	int fl = 0;

	int flist[5] ;
	for(ii=0; ii < 5 ; ii++){		
		for(jj=0; clist[ii][jj] != '\0' ; jj++){	
			fl = fl*10 + (int)(clist[ii][jj] - '0') ;		
			//printf("%s --> %d %x\n", clist[ii] , fl , clist[ii][jj]);
		}
		flist[ii]= fl;
		fl=0;//jj++;
	}

	return flist;	
}

int main(int argc , char *argv[])
{
	

	int ii = 0, aa=0 , jj=0;
	for(ii=0; argv[1][ii] != '\0'; ii++)	
	{
		aa = aa*10 + (int)(argv[1][ii]-'0') ;
	}

	printf("aa=%d\n",aa);

	int *flist = (float*)malloc(aa*sizeof(float));

	char *clist[]={"123","321", "123","321", "123"};
	

	//for(ii=0; ii < 5 ; ii++)		
			//printf("%s\n", clist[ii]);

	flist = char2float ( clist );
	for(ii=0; ii < 5 ; ii++)		
			printf("%d\n", flist[ii]);

	return 0;	
}

