
#include <stdio.h> 
#include <unistd.h>
#include <stdlib.h> 
int main() 
{
printf("%d", (int) getpid()); 
  int x=100; 
   fork(); 
   x=x+1;
printf("hello world (pid:%d)\n %d\n", (int) getpid(),x);	 
}
