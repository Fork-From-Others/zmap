#include "util_test.h"

#include <stdio.h>

int main(int argc, const char *argv[]) {
	int i;
	printf("argc: %d\n", argc);
	for (i = 0; i < argc; ++i) {
		printf("argv[%d]: %s\n", i, argv[i]);
	}
	return 0;
}