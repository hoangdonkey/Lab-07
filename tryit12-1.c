#include <stdio.h>
int main(int argc, char const *argv[])
{
	int ary[5], i = 0, max = 0, min = 0;

	for (i = 0; i < 5; i++)
	{
		printf("Input No.%d: ", i + 1);
		scanf("%d", &ary[i]);
	}
	
	max = ary[0];
	min = ary[0];
	
	for(i = 0; i < 5; i ++){
		if(max < ary[i]){
			max = ary[i];
		}
		else if(min > ary[i]){
			min = ary[i];
		}
	}
	printf("Maximum value is %d\n", max);
	printf("Minimum value is %d\n", min);
	return 0;
}