#include<stdio.h>
//Q14.Write a program to input a character and check whether it is a vowel or consonant using if–else.
int main() {
    char ch;

    // Input a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a vowel (lowercase or uppercase)
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("The character '%c' is a Vowel.\n", ch);
    }
    // Check if the character is an alphabet (lowercase or uppercase)
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("The character '%c' is a Consonant.\n", ch);
    }
    // If it's neither, it's not an alphabet
    else {
        printf("The character '%c' is not an alphabet.\n", ch);
    }

    return 0;
}
