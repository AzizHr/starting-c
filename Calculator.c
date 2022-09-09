
//  Simple Calculator in C

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	
	// Program Variables
	
	double a , b , result = 0;
	int operation;
	char option[5];
	printf("\n\t------------Calculator------------\n");
	printf("\n\n\t<======= Choose Your Calculator =======>\n");
	printf("\n\tBasic Calculator => (bc) ---------- Advance Calculator => (ac) \n"); // Calculator Type
	printf("\nTap Here (bc  or  ac) : "); // Tap Your Type
	scanf("%s" , option);
	    
	    // Check The Calculator Type
		if(!strcmp(option , "bc")) {
		
		printf("\n\t1-Additon => + \n");
	    printf("\t2-Substraction => - \n");
	    printf("\t3-Multiplication => * \n");
	    printf("\t4-Devision => / \n");
	    printf("\n\t----------Choose Your Operation---------- \n");
	    printf("\n\tTap Here : ");
	    scanf("%d" , &operation);
		printf("\n\tEnter Number 1 : ");
	    scanf("%lf" , &a);
	    printf("\n\tEnter Number 2 : ");
	    scanf("%lf" , &b);
	    
	    // Check The Operation
	    switch(operation) {
		
		    case 1:
			    result = a + b;
			    break;
		    case 2:
			    result = a - b;
			    break;
		    case 3:
			    result = a * b;
			    break;
		    case 4:
			    if(a == 0) {
				    result = 0;
			    }else if(b == 0) {
				    printf("\n\tCan't Devide by 0 \n");
			    }else {
				    result = a / b;
			    }
			    break;
		    default:
			    printf("\nwrong operator \n");
			    break;
        }
	}else if(!strcmp(option , "ac")) {
		
		printf("\n\t5-Cos() \n");
	    printf("\t6-Sin() \n");
	    printf("\t7-Tan() \n");
	    printf("\t8-Sqrt() \n");
	    printf("\t9-Pow() \n");
	    printf("\n\t----------Choose Your Operation----------\n");
	    printf("\n\tTap Here : ");
	    scanf("%d" , &operation);
		printf("\n\tEnter A Number : ");
	    scanf("%lf" , &a);
	    
	    // Check The Operation
	    switch(operation) {
	    	case 5:
	            result = cos(a);
	            break;
	        case 6:
	            result = sin(a);
	            break;
	        case 7:
	            result = tan(a);
	            break;
	        case 8:
	            result = sqrt(a);
	            break;
	        case 9:
	        	printf("\n\tEnter Number 2 : ");
	            scanf("%lf" , &b);
	            result = pow(a , b);
	            break;
	        default:
	        	printf("\n\tUnknown Operation !\n");
			    break;	
		}
	}else {
		printf("\n\tUnknown Option !\n");
	}
	// Printing The Result
	printf("\n\tThe Result is %.2lf\n" , result);	
	return 0;
}
