
// Simple Bank System

#include <stdio.h>

int main() {
	
	// Program Variables
	const int pw = 1234;
	float balance = 150.36;
	float add; 
	float withdraw; 
	int password;
	int operation;
	int shot = 0;
	
	
	    printf("^^^^ Welcome To Your Favourite Bank ^^^^ \n\n"); // Welcome Message
		printf("--- Enter Your Password --- \n");
	    scanf("%d" , &password);
	    
	    // Password Checkout
	    while(password  != 1234 && shot < 2) {
		    printf("Wrong Password !\n");
		    printf("\n--- Re-enter Your Password --- \n");
	        scanf("%d" , &password);
	   }
	   
	   if(shot == 2) {
	   	    printf("Your Card Has Been Taken Go To Your Bank Area To Get it Back  \n"); // The Card Will be Taken After Three Tries of Failing
	   }
	   // If The Password Was Correct
	   else {
	   	  
	   	  printf("\nWelcome To Your Account \n\n");
		    printf("1 - ADD ******\n2 - WITHDRAW ******\n\n");
		    printf("Choose Your Operation ( Type 1 To Add and 2 To WITHDRAW)\n");
		    scanf("%d" , &operation);
		    switch(operation) {
			    case 1:
				   printf("Add Something To Your Balance \n");
				   scanf("%f" , &add);
				   balance += add;
				   printf("\nYou Added %.2f $\n" , add);
				   printf("\nYour Balance Now is %.2f $\n" , balance);
				   break;
			    case 2:
				   printf("\nEnter a Price To Withdraw\n");
				   scanf("%f" , &withdraw);
				   
				   // Balance Checkout
				   if(withdraw > balance) {
					
					    printf("\nYou Don't Have This in Your Balance \n");
					    printf("\nYour Balance Now is %.2f $\n" , balance);

				  } else {
					 balance -= withdraw;
					 printf("\nYour Balance Now is %.2f $\n" , balance);

				  }
		   }  
	   }
	return 0;
}
