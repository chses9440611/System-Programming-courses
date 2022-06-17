#include <stdio.h>
#include <string.h>
int main() {
	printf("The size of int: %lu\n", sizeof(int));
	printf("The size of double: %lu\n", sizeof(double));
	printf("The size of float: %lu\n", sizeof(float));
	printf("The size of long: %lu\n", sizeof(long));
	printf("The size of long long: %lu\n", sizeof(long long));
	double data[8] = {0};
	printf("The address of data %x\n", data);
	printf("The address of data %x\n", data+2);
	ssize_t str_size = sizeof("Hello\0World");
	printf("The size of Hello\\0World in str_size is %ld\n", str_size);
	ssize_t strlen_size = strlen("Hello\0World");
	printf("The size of len is %ld\n", strlen_size);
	char a[3];
	printf("The size of char[3]: %lu\n", sizeof(a));
	printf("The size of size_t: %lu\n", sizeof(size_t));
	printf("The size of ssize_t: %lu\n", sizeof(ssize_t));
	return 0;
}
