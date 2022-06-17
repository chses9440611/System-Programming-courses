// Use system call write to print name
#include <unistd.h>

int main() {
	write(1, "My name is Jason Huang.\n", 24);
	return 0;
}   
