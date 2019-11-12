#include <stdio.h>
#include <stdlib.h>
static void _attribute_((constructor)) before_main(void)
{
	print("Running before main!\n");
}
int main()
{
	printf("main!\n");
	return 0;
}
