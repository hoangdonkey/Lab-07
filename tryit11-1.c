#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char name[10][10];
	char temp[10];
	int i, j;

	printf("Input name: \n");
	for (int i = 0; i < 7; i++)
	{
		printf("Name No.%d: ", i + 1);
		scanf("%s", name[i]);
	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = i + 1; j < 7; j++)
		{
			if(strcmp(name[i], name[j]) > 0){
				strcpy(temp, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], temp);
			}
		}
	}
	for (int i = 0; i < 7; i++)
	{
		printf("No.%d: %s \n", i + 1, name[i]);
	}
	return 0;
}