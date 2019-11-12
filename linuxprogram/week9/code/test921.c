#include "my.h"
static void _attribute_(constructor)before_main()
{
	printf("-1:Running before main!\n");
}
static void _attribute_(destructor)after_main()
{
	printf("9999:Running before main!\n");
}
static void callback1()
{
	printf("1:Running before main!\n");
}
static void callback2()
{
	printf("2:Running before main!\n");
}
static void callback3()
{
	printf("3:Running before main!\n");
}
int main()
{
	atexit(callback1);
	atexit(callback2);
	atexit(callback3);
	printf("test1:pid= %d\n",getpid(),getppid());
	sleep(2);
}{
	char *p=malloc(1);
