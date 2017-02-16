#include<stdio.h> 
#include<string.h> 

#define max(c,v) ((c)>(v) ? (c) : (v)  )

int main( int argc, char *argv[] )
{
	char *str = argv[1];

    int n = strlen(str);
    int sum[n+1]; // To store cumulative sum from first digit to nth digit
    sum[0] = 0;
 
    /* Store cumulative sum of digits from first to last digit */
    for (int i = 1; i <= n; i++)
        sum[i] = (sum[i-1] + str[i-1]  - '0'); /* convert chars to int */
 
    int ans = 0; // initialize result
 
    /* consider all even length substrings one by one */
    for (int len = 2; len <= n; len += 2)
    {
        for (int i = 0; i <= n-len; i++)
        {
            int j = i + len - 1;
 
            /* Sum of first and second half is same than update ans */
            if (sum[i+len/2] - sum[i] == sum[i+len] - sum[i+len/2])
                ans = max(ans, len);
        }
    }
	
	printf("maxlen= %d %s \n", ans , str );	

	return 0 ; 
} 
