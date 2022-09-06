#include <stdio.h>  
#include <string.h>  

int reverseStr(char string[40]) {
    printf("\nAfter the reverse of a string: %s", strrev(string));
}

int main() {
    char string[40];
    printf("\nEnter a string to be reversed: ");
    fgets(string, 40, stdin);
    puts(string);
    reverseStr(string);
    return 0;
}
