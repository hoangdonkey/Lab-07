#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char a, str[81], *ptr;
	printf("\nEnter a sentence: ");
	gets(str);
	printf("\nEnter character to search for: ");
	a = getchar();
	ptr = strchr(str, a);
	printf("\nString starts at address %u", str);
	printf("\nFirst occurrence of the character is at address: %u\n", ptr);
	printf("\nPosition of the first occurrent(starting from 0) is: %d\n", ptr - str);

	return 0;
}