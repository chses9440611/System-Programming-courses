#include <stdio.h>

int main() {
	char s1[13] = "Hello World!";
	char* p2 = s1;
	*p2 = 'J';
	printf("%s\n", s1); 
	// char* ptr = "Hello";
	//*ptr = 'J';
	return 0;
}
