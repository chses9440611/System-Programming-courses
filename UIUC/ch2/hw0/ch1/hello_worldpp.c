/* This program write a system-call style hello world */


void *write(int, const void*, int);
int main() {
	write(1, "Hello\n", 6);
	return 0;
}
