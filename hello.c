#include <stdio.h>

int main() {
    printf("Welcome!\n");
    printf("Enter numbers, input a negative when finished\n");
    scanf("%d", &input);

    int input = 0;
    int total = 0;
    int amount = 0;
    int average = 0;
    int largest, smallest;

        scanf("%d", &input);
        
        if (input < 0) // Stop if negative number is entered
            break;
        
        total += input;
        amount++;

    }

    if (amount > 0)
        average = total / amount;
    
    printf("Average: %d\n", average);
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}