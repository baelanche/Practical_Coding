#include <stdio.h>

int func(int in_data)
{
	fprintf(stdout, "stdout : %d Baegyu Jung\n", in_data);
	fprintf(stderr, "stderr : %d Baegyu Jung\n", in_data);
	fflush(stdout);
}
