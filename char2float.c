#include<stdio.h>
#include<stdlib.h>



void char2float ( char **clist , float *flist)
{
	int ii=0, jj=0;
	int fl = 0;
	int flag = 0;
	float vfl = 0.0;

//	int flist[5] ;
	for(ii=0; ii < 5 ; ii++){		
		for(jj=0; clist[ii][jj] != '\0' ; jj++){	
			if(!flag && clist[ii][jj]!='.')
				fl = fl*10 + (int)(clist[ii][jj] - '0') ;		
			//printf("%s --> %d %x\n", clist[ii] , fl , clist[ii][jj]);
			if(clist[ii][jj]=='.')
			{
				flag=1;
			}else if(flag){
				vfl = vfl/10.0f + (float)(clist[ii][jj] - '0')/10.0f ;
			}
		}
		flist[ii]= fl+vfl;
		fl=0;flag=0;vfl=0;
	}

	return ;	
}

int main(int argc , char *argv[])
{
	
	int ii = 0, aa=0 , jj=0;
	for(ii=0; argv[1][ii] != '\0'; ii++)	
	{
		aa = aa*10 + (int)(argv[1][ii]-'0') ;
	}

	printf("aa=%d\n",aa);

	float *flist = (float*)malloc(aa*sizeof(float));

	char *clist[]={"123.0","321.1", "123.2","321", "123"};
	

	char2float ( clist , flist);
	for(ii=0; ii < 5 ; ii++)		
			printf("%.2f\n", flist[ii]);

	return 0;	
}

