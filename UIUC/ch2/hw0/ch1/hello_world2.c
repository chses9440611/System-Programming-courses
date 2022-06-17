/* This program write a system-call style hello world */
/* include unistd.h here for no declaration of write */
#include <stdio.h>
#include <unistd.h>

int main() {
	write(1, "Hello\n", 6);
	return 0;
}
