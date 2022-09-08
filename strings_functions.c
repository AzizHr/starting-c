#include <stdio.h>
#include <ctype.h>


int main() {
	
	char word1[] = "Hello ";
	char word2[] = "World ";
	
	printf("%s\n" , strcat(word1 , word2));  //It concatenates two strings and returns the concatenated string.
	
	char name[] = "welcome";
	printf("length of the varaible name is %d\n" , strnlen(name)); //It returns the string's length
	
	
	
	
	return 0;
}
