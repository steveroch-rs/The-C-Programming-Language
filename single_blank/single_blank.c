#include <stdio.h>

int main() {
	
	int c, blanks;
	c = blanks = 0;
	
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++blanks;
			if (blanks <= 1) {
				putchar(c);
			}
		} else {
			blanks = 0;
			putchar(c);
		}
	}
	return 0;
}
