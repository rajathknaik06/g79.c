/*Jonas, a teacher aiming to engage his students visually, requires a program to create a sequence of characters. The sequence should alternate between two given characters, char1, and char2, for a specified number, N. 



Help Jonas with a program that prints the required sequence.



Example



Input:

char1 = A

char2 = B

N = 4



Output:

A BB AAA BBBB 



Explanation:

The output follows a pattern where 'A' is printed once, followed by 'B' printed twice, then 'AAA', and finally 'BBBB'. 

Input format :
The first line of input consists of a character, representing the value of char1.

The second line of input consists of a character, representing the value of char2.

The third line of input consists of an integer N, representing the numbers in the pattern.

Output format :
The output displays the generated sequence of characters, with each character sequence separated by a space.*/

#include <stdio.h>

int main() {
    char char1, char2;
    int N;
    scanf(" %c", &char1);
    scanf(" %c", &char2);
    scanf("%d", &N);
    int line = 1;
    while (line <= N) {
        if (line % 2 == 1) {
            for (int i = 1; i <= line; i++) {
                printf("%c", char1);
            }
        } else {
            for (int i = 1; i <= line; i++) {
                printf("%c", char2);
            }
        }
        printf(" ");
        line++;
    }
    return 0;
}
