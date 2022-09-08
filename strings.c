#include <stdio.h>
#include <ctype.h>


int main() {
	
	int i = 0, j = 0;
	
	char letter = 'a'; //lowercase
	char LETTER = 'A'; //uppercase
	printf("%c\n" , toupper(letter));  //make uppercase
	printf("----------------------------------\n");
	printf("%c\n" , tolower(LETTER));  //make lowercase
	printf("----------------------------------\n");
	
	
	char word[] = "apple"; //lowercase word
	char l;
	char WORD[] = "APPLE"; //uppercase word
	char L;
	
	//make a word (array of caracters) uppercase 
	while(word[i]) {
		
		l = word[i];
		printf("%c" , toupper(l));
		i++;
	}
	
	printf("\n----------------------------------\n");
		
	//make a word (array of caracters) lowercase 
	while(WORD[j]) {
		
		L = WORD[j];
		printf("%c" , tolower(L));
		j++;
	}	
	
}
