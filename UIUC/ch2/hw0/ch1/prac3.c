#include <unistd.h>
#include <fcntl.h>

int main() {
	mode_t mode = S_IRUSR | S_IWUSR;
	int fileDes = open("hello_world.txt", O_CREAT | O_TRUNC | O_RDWR, mode);
	write(fileDes, "Hello World!\n", 13);
	close(fileDes);
	return 0;
}
