//Q.1 Alphabet Skipper
//Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using a
//do-while loop.
//Example:
//Output: a, e, i, m, q, u, y

#include<stdio.h>
#include<conio.h>

void main(){
	
	char current_char = 'a';

    do {
        printf("%c, ", current_char);
        current_char += 4;  
    } while (current_char <= 'z');

    printf("\n");

	
	
	getch();
}
