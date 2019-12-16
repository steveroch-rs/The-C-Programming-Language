#include <stdio.h>

int main() {
	
	double blanks, tabs, newlines;
	int c;
	c = 0;
	blanks = tabs = newlines = 0;
	
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++blanks;
		} else if (c == '\t') {
			++tabs;
		} else if (c == '\n') {
			++newlines;
		}
	}
	
	printf("Blanks: .0f\nTabs: .0f\nNewlines: \n", blanks, tabs, newlines);

	return 0;
}
