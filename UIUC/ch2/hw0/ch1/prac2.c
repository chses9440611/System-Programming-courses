#include <unistd.h>
#define STDOUT_FILENO 1
#define STDERR_FILENO 2

int main() {
	write(STDOUT_FILENO, "This is standard output.\n", 25);
	write(STDERR_FILENO, "*\n", 2);
	write(STDERR_FILENO, "**\n", 3);
	write(STDERR_FILENO, "***\n", 4);
	return 123;
}
