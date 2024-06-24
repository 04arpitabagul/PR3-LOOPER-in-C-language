//Q.3 Digit Addition
//Develop a Program to find the sum of a number's first and last digits.
//
//Example:
//Input: Enter any number: 384
//Output: The sum of the first and the last digit: 7

#include<stdio.h>
#include<conio.h>

void main(){
	
	int num, firstDigit, lastDigit, sum;

    printf("Enter any number: ");
    scanf("%d", &num);

    lastDigit = num % 10;  

    while (num >= 10) {
        num /= 10;  
    }

    firstDigit = num;  

    sum = firstDigit + lastDigit;
    printf("The Sum of first and last digit: %d",sum);
	
	getch();
}
