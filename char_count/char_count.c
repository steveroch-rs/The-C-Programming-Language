#include <stdio.h>

int main() {
	float nc;

	for(nc = 0; getchar() != EOF; ++nc);

	printf("%.0f\n", nc);
	
	return 0;
}
