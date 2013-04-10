/*  Challenge:
*	 Given an integer, print the number out in reverse, WITHOUT converting it to a string.
*    Within that same function, determine if the number is a palindrome
*  --Hint, while printing in reverse, keep track of the highest place value in the number
*/

	#include <stdio.h>
	#include <stdlib.h>
	
	// Function reversePrintPal accepts a number and prints it out in reverse
	void reversePrintPal( int number );
	
	
		int main ( void ){
			
			// Variable to hold user input
			int num1 = 0;
		
			// Request a number and print it out
			printf( "\nEnter Number:  " );
			scanf( "%d", &num1 );
			printf( "\n\nThe number before reversing: %d\n\n", num1 );
			
			// Call function reversePrint;
			printf( "\n\nThe number after reversing: " );
			reversePrintPal( num1 );
			printf( "\n\n" );
		
			return 0;
		}
		
		
		void reversePrintPal( int number ){
			
			
			
		}