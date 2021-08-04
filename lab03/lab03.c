#include <stdio.h>

int main() 
{
	int in_data = 0;
	setvbuf(stdout, NULL, _IOFBF, 100);
	while (in_data != 9999)
	{
	fscanf(stdin, "%d", &in_data);
	fprintf(stdout, "Hello stdout : %d Baegyu Jung\n", in_data);
	fprintf(stderr, "Hello stderr : %d Baegyu Jung\n", in_data);
	fflush(stdout);
	}
}
