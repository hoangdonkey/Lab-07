#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char word[100];
	int i, vow = 0, con = 0, count = 0, sps = 0;
	
	printf("Enter a word: ");
	gets(word);
	count = strlen(word);

	for(i = 0; i < count; i++){
		switch(word[i]){
			case 'a':
			case 'A':
			case 'i':
			case 'I':
			case 'u':
			case 'U':
			case 'e':
			case 'E':
			case 'o':
			case 'O':{
				vow++;
				break;
			}
			case ' ':{
				sps++;
				break;
			}
			default:{
				con++;
				break;
			}
		}
	}

	printf("\nNumber of vowels: %d\n", vow);
	printf("Number of consonants: %d\n", con);
	printf("Number of spaces: %d\n", sps);

	return 0;
}