#include "my.h"
static int share_cnt=0;
static pthread_rwlock_t rwlock;

void * reader(void *param)
{
	int i = (int)param;
	while(1)
	{
		pthread_rwlock_ldlock(&rwlock);
		fprintf(std);
	}
}
