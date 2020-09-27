#include <stdio.h>
#include <string.h>
int main()
{
	char *ptr;
	char word[10];
	int i, vowcnt = 0;
	printf("\nEnter a word: ");
	scanf("%s", word);
	ptr = &word[0];
	for (i = 0; i < strlen(word); i++)
	{
		if((*ptr == 'a') || (*ptr == 'e') || (*ptr == 'i') || (*ptr == 'o') || (*ptr == 'u') || (*ptr == 'A') || (*ptr == 'E') || (*ptr == 'I') || (*ptr == 'O') || (*ptr == 'U')){
			vowcnt++;
		}
			ptr++;
	}
	printf("\nThe word is: %s\nThe number of vowels in the word is: %d", word, vowcnt);
	return 0;
}