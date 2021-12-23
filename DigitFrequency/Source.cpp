#include <stdio.h>

char s[1002];

int main() {
	int counts[10] = { 0 };

	scanf("%s", s);

	char* p;
	for (p = s; *p; p++) {
		if (*p >= '0' && *p <= '9')
			counts[(*p) - '0']++;
	}

	int i;
	for (i = 0; i < 10; i++) {
		printf("%d ", counts[i]);
	}
	printf("\n");

	return 0;
}