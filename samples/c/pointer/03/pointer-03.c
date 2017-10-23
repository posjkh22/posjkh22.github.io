
#include <stdio.h>

int main(){

	char data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	char* char_pointer = data;

	int* int_pointer = data;

	printf(" char pointer: %d\n", *char_pointer++);

	printf(" char pointer: %d\n", *char_pointer++);

	printf(" char pointer: %d\n", *char_pointer);

	printf(" int pointer: %x\n", *int_pointer++);

	printf(" int pointer: %x\n", *int_pointer);

}
