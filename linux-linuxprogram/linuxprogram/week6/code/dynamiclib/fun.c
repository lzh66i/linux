#include "uhead.h"
int usum(int * a,int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	    sum=sum+a[i];
	return sum;
}
int userrand(int *a,int n)
{
	int i;
	srand((int)time(0));
	i=1+(int)(100.0*rand()/(RAND_MAX+1.0));
	return i;
}
void show(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	   printf("a[%d]=%d\n",i,a[i]);
}
