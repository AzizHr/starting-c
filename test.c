#include <stdio.h>

int main() {
	
	float balance = 150.36;
	float add;
	float withdraw;
	int password;
	int operation;
	
	
	printf("^^^^ Welcome To Your Favourite Bank ^^^^ \n\n");
	
	printf("--- Enter Your Password --- \n");
	scanf("%d" , &password);
	
	if(password  = 1234) {
		printf("\nWelcome To Your Account \n\n");
		printf("1 - ADD ******\n2 - WITHDRAW ******\n\n");
		printf("Choose Your Operation ( Type 1 To Add and 2 To WITHDRAW)\n");
		scanf("%d" , &operation);
		switch(operation) {
			case 1:
				printf("Add Something To Your Balance \n");
				scanf("%f" , &add);
				balance += add;
				break;
			case 2:
				printf("\nEnter a Price To Withdraw\n");
				scanf("%f" , &withdraw);
				if(withdraw > balance) {
					
					printf("\nYou Don't Have This in Your Balance \n");
				} else {
					balance -= withdraw;
				}
		}
		
	} else {
		printf("Wrong Password \n");
	}
	
	printf("\nYour Balance Now is %.2f $\n" , balance);
	return 0;
}
