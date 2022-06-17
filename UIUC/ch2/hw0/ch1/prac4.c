#include <unistd.h>
#include <fcntl.h>

int main() {
	// other have read permission
	mode_t mode = S_IRUSR | S_IWUSR | S_IROTH;
	// file can be appended, and read write
	int filesDes = open("message.txt", O_CREAT | O_APPEND | O_RDWR, mode);
	write(filesDes, "hello!", 6);
	close(filesDes);
	return 0; 
}
