#include <stdio.h>

int main() {
	int a = 0;
	int b = 100;
#ifdef DEBUF_MODE
	printf("%s : %d : %d %d %d\n", __FILE__, __LINE__, a, b, a++ + ++b);
#else
	printf("%d %d %d\n", a, b, a++ + ++b);
#endif
	return 10;
}
