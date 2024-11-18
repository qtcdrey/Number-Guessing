#include <stdio.h>
#include <stdlib.h>

int guess_number,number_guess = 1,guess_limit = 3,guess_count = 0,guess_out = 1;

int main() {

    while (guess_number != number_guess && guess_out != 0) {
        system("cls");
        if (guess_limit > guess_count) {
            printf("remaining %d",guess_limit);
            printf("\nGuess Number: ");
            scanf("%d",&guess_number);
            guess_limit--;
            guess_out = 1;
        } else {
            guess_out = 0;
        }
    }
    if (guess_out == 0) {
        puts("out of guesses\n");
    } else {
        puts("you win\n");
    }

    return 0;
}
