#include <stdio.h>
#include <string.h>

int main() {
    char s[100];

    printf("Enter the string: ");
    scanf("%99s", s); 

    size_t len = strlen(s);

    int isPalindrome = 1; 
    for (size_t i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            isPalindrome = 0; 
            break;
        }
    }

    if (isPalindrome)
        printf("Yes, it is a palindrome\n");
    else
        printf("No, it's not a palindrome\n");

    return 0;
}
