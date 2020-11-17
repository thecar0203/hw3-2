#include <stdio.h>
#include <stdlib.h>
#define k 10
int main(void)
{
	int i,j;
	int n[k];
	n[0] = 0;
	n[1] = 1;

	for (j = 2; j <= k; j++)
	{
		n[j] = n[j - 1] + n[j - 2];
	}
	for (i = 0; i <= k; i++)
	{
		printf("%d  ", n[i]);
	}
	return 0 ;
}