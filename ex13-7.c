#include <stdio.h>
#include <stdlib.h>
int main(){
	int *a, i, n, sum = 0;
	printf("\n%s%s", "An array will be created dynamically.\n\n", "Input an array size and followed by interger: ");
	scanf("%d", &n);
	a = (int *) calloc (n, sizeof(int));
	for (int i = 0; i < n; i++)
	{
		printf("Enter %d values: \n");
		scanf("%d", a + i);
	}
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	free(a);
	printf("\n%s%7d\n%s%7d\n\n", "Number of elements: ", n, "Sum of the elements: ", sum);

}