#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define STDOUT_FILENO 1
#define STDERR_FILENO 2
int main() {
	mode_t mode = S_IRUSR | S_IWUSR; // chmod 400
	close(1); // close stdout file
	int fileDes = open("prac5_output.txt", O_CREAT | O_TRUNC | O_RDWR, mode);
	printf("The file description is: %d\n", fileDes);
	//	write(fileDes, "Hello World!\n", 13);
	for(int i=0; i<5; i++) {
		write(STDOUT_FILENO, "Hello\n",6);
		write(STDERR_FILENO, "Err\n", 4);
	}
	printf("Hello World\n");// for printf buffer is flush, won't print this line
	close(fileDes);
	return 0;
}
