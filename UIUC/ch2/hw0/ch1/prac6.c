#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#define STDERR_FILENO 2

int main() {
	close(STDERR_FILENO);
	mode_t mode = S_IRUSR | S_IWUSR;
	char filePath[] = ".";
	int pathSize = sizeof(filePath) / sizeof(char);
	int fileDes = open(filePath, O_CREAT | O_TRUNC | O_RDWR, mode);
	// open failed
	if(fileDes == -1) {
		int errlog = open("errors.txt", O_CREAT | O_TRUNC | O_RDWR, mode);
		write(errlog, (const void*) filePath, pathSize);
		perror(" open fail!");
		close(errlog);
	}
	return 0;
}
