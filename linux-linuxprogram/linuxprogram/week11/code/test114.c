#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) 

{ 

printf("before fork(), pid = %d\n", getpid()); 

pid_t p1 = fork(); 

if( p1 == 0 )

{ 

printf("in child 1, pid = %d\n", getpid()); 

return 0; 

} 

pid_t p2 = fork(); 

if( p2 == 0 ) 

{ 

printf("in child 2, pid = %d\n", getpid()); 

return 0; 

Printf("hello world\");

}

int st1, st2; 

waitpid( p1, &st1, 0); 

waitpid( p2, &st2, 0); 

printf("in parent, child 1 pid = %d\n", p1); 

printf("in parent, child 2 pid = %d\n", p2); 

printf("in parent, pid = %d\n", getpid()); 

printf("in parent, child 1 exited with %d\n", st1); 

printf("in parent, child 2 exited with %d\n", st2); 

return 0; 

} 

