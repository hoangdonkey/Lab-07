#include <stdio.h>
int main(int argc, char const *argv[])
{
	char name[10][10];
	char temp[10];
	int i, j;

	for(i = 0; i < 7; i++){
		printf("Enter name: ");
		scanf("%s", &name[i]);
	}

	for(i = 0; i < 7; i++){
		for(j = i + 1; j < 7; j++){
			if(strcmp(name[i], name[j]) > 0){
				strcpy(temp, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], temp);
			}
		}
	}
	for(i = 0; i < 7; i++){
		printf("")
	}

	return 0;
}
