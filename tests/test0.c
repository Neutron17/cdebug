#define MEM_DEBUG 1

#include <stdio.h>
#include "ntr/debug.h"

void func() {
	puts("func");
	char *x = malloc(1);
	free(x);
}

int main() {
	int *x = malloc_m(sizeof(int), "hi");
	func();
	func();
	int *y = malloc(sizeof(int));
	free(x);
	memdeb_print();
	memdeb_destroy();
	return 0;
}
