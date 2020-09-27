#include <stdio.h>
int main(int argc, char const *argv[])
{
	int ary[5], i = 0;

	for(i = 0; i < 5; i++){
		printf("Input No.%d: ", i + 1);
		scanf("%d", &ary[i]);
	}
	printf("\nReverse position is:\n");
	
	for(i = 4; i >= 0; i--){
		printf("%d\n", ary[i]);
	}
	return 0;
}