#include <stdio.h>
#define BUFSIZE 1020
#define TABLESIZE BUFSIZE
#undef BUFSIZE
#define BUFSIZE 37 // TABLESIZE = 37
int main() {
	printf("%d\n", TABLESIZE);
	return 10;
}
