#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	pid_t pid = 0; 
	pid = fork(); 
	pid = fork(); 
	pid = fork(); 
	for (int i = 0 ; i < 20; i++)
	{
		sleep(1); 
		printf("PID = %d %d \n", pid, i); 
	}
	system("cat output.txt");
}

