#include <stdio.h>
int main(int argc, char const *argv[])
{
	int var = 500, *ptr_var;
	ptr_var = &var;
	printf("The value %d is stored in address %u ", var, &var);
	printf("\nThe value %u is stored at address: %u\n", ptr_var, &ptr_var);
	printf("\nThe value %d is stored at address: %u\n", *ptr_var, ptr_var);
	return 0;
}