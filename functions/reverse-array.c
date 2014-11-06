/*
	
	array[] = {1,2,3,4,5}
	reverse[] = {5,4,3,2,1}
	
	We are going to reverse array[] with a function
	
	So we are going to get the chance to write 2 functions

*/
#include <stdio.h>

// Function Prototypes
void print_array(int *array);
void reverse_array(int *array);

int main() {
	
	// Declare Variables for the loop and the array itself		
	int i, array[5];

	// Populate the correct values into array[] with a loop
	for (i = 0; i < 5; i++) {
		array[i] = i+1; 
	}

	// Call print_array() to print out array[]
	print_array(array);		
	
	// Call the reverse_array() to reverse array[]
	reverse_array(array);

	// Call the print_array() again to print out array[] in it's reversed form	
	print_array(array);		

	return 0;
}
