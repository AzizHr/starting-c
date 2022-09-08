#include <stdio.h>
#include <string.h>

int main() {
	
    // Password -- Just 3 Shots
    
    const char pw[] = "aziz123";
    
    char password[8];
    
    int ctr = 0;
    
    printf("enter your password \n");
    gets(password);
    
    
    while(strcmp(pw , password) && ctr < 2) {
    	
    	printf("\nenter your password \n");
        gets(password);
        ctr++;
	}
	if(ctr == 2) {
		
		printf("\ntry again later \n");
	}
	else {
		
		printf("\nwelcome !!\n");
	}
    
  
    
    
	return 0;
}







