#include <stdio.h>
#include <stdbool.h>

int main() {
// here we define the enterNumber variable
    int enterNumber;

// here we enter a loop to give the user another try if they enter an invalid value
    while (true) {
        printf("Enter a number to determine if it is odd or even: \n");
//here we gather user input - the loop continues if an invalid number is inputted
        if (scanf("%d", &enterNumber) != 1) {
            printf("Invalid entry. Try again. \n");
//here we clear the user input and continue if the input is not a new line
            while (getchar() != '\n');
        } else {
//here we check to see if enterNumber is NOT divisible by 2 - if this is satisfied - we print output and exit loop
            if (enterNumber % 2 != 0) {
                printf("%d is an odd number \n", enterNumber);
                break;
//here we check to see if enterNumber IS divisible by 2 - if this is satisfied - we print output and exit loop
            } else if (enterNumber % 2 == 0) {
                printf("%d is an even number. \n", enterNumber);
                break;
            }
        }
    }

    return 0;
}
