#include "my.h"
void* worker1(void*)

int c=100;
sem_t mutex,full;
int main()
{
	int ret;
	pthread_t tid[2];
	ret=sem_init(&mutex,0,1);
	ret=sem_init(&mutex,0,1);
	
}
