# HW0 Ch2 Ans

1. How many bits are there in a byte?
	- Ans: 8 bits

1. How many bytes are there in a char?
	- 4 bytes for int, 1 byte for char

1. How many bytes the following are on your machine? int, double, float, long, and long long
	- int: 4 bytes
	- double: 8 bytes
	- float: 4
	- long: 8
	- long long: 8
 
1. On a machine with 8 byte integers, the declaration for the variable data is int data[8]. If the address of data is 0x7fbd9d40, then what is the address of data+2?

	- ans: address of data[8] is 0x7fb9d50

1. What is data[3] equivalent to in C? Hint: what does C convert data[3] to before dereferencing the address? Remember, the type of a string constant "abc" is an array.


1. Why does this SEGFAULT?

```c=
char* ptr = "Hello";
*ptr = 'J';
```

	-ans: [Stackoverflow](https://leetcode.com/problems/binary-tree-cameras/solution/)

1. What is the value of the variable str_size?

```c=
ssize_t str_size = "Hello\0World";
```
	- ans: 12

1. What is the value of the variable str_len?

```c=
ssize_t str_size = strlen("Hello\0World");
	- ans: 5 => strlen count until meet '\0'(not include)

1. Give an example of X such that sizeof(X) is 3

	- ans: char[3]

1. Give an example of Y such that sizeof(Y) might be 4 or 8 depending on the machine.

	- ans: Y is size_t 4 bytes for 32 bit machine, 8 bytes for 64 bit machine
