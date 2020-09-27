#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char text[100];
	int i = 0, num = 0;

	printf("Enter string: ");
	gets(text);
	
	for(i = 0; text[i] != '\0'; i++){
		if(text[i] == 'a' || text[i] == 'A' || text[i] == 'e' || text[i] == 'E' || text[i] == 'i' || text[i] == 'I' || text[i] == 'o' || text[i] == 'O' || text[i] == 'u' || text[i] == 'U'){
			num++;
		}
	}
	printf("Number of vowel(s): %d", num);
	
	return 0;
}