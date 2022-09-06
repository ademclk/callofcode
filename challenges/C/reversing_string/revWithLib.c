#include <stdio.h>  
#include <string.h>  

int reverseString(char string[40]) {
	printf (" \n After the reverse of a string: %s ", strrev(string));
	return 0;
}

int main()  
{  
    	char string[40]; // declare the size of character string  
    	printf (" \n Enter a string to be reversed: ");  
    	scanf ("%s", &string);  
	reverseString(string);
	return 0;  
}
