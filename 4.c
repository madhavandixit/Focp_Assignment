#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;
    srand(time(0));

    printf("Enter your choice:\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Your choice: ");
    scanf("%d", &userChoice);

    computerChoice = rand() % 101;

    if (computerChoice <= 33) {
        computerChoice = 1;
    } else if (computerChoice <= 66) {
        computerChoice = 2;
    } else {
        computerChoice = 3;
    }

    printf("Computer chose: ");
    if (computerChoice == 1) {
        printf("Rock\n");
    } else if (computerChoice == 2) {
        printf("Paper\n");
    } else {
        printf("Scissors\n");
    }

    if (userChoice == computerChoice) {
        printf("It's a draw!\n");
    } else if ((userChoice == 1 && computerChoice == 3) || (userChoice == 2 && computerChoice == 1) || (userChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
