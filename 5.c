#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "programming";
    char guessedWord[50];
    char guess;
    int chances = 3, correctGuess, i, length;

    length = strlen(word);
    for (i = 0; i < length; i++) {
        guessedWord[i] = '_';
    }
    guessedWord[length] = '\0';

    printf("Welcome to Hangman!\n");

    while (chances > 0) {
        correctGuess = 0;
        printf("\nWord: %s\n", guessedWord);
        printf("You have %d chances left.\n", chances);
        printf("Enter your guess: ");
        scanf(" %c", &guess);

        for (i = 0; i < length; i++) {
            if (word[i] == guess && guessedWord[i] == '_') {
                guessedWord[i] = guess;
                correctGuess = 1;
            }
        }

        if (correctGuess) {
            printf("Good guess!\n");
        } else {
            chances--;
            printf("Wrong guess!\n");
        }

        if (strcmp(word, guessedWord) == 0) {
            printf("\nCongratulations! You've guessed the word: %s\n", word);
            break;
        }

        if (chances == 0) {
            printf("\nGame over! The word was: %s\n", word);
        }
    }

    return 0;
}
