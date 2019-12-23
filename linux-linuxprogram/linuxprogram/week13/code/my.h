#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <errno.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <time.h>
#include <signal.h>
#include <sys/times.h>
#include <limits.h>


#define LOOP 100000000
#define NUM 4
#define NT 100
#define WRITER_FIRST
