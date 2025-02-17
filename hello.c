#include <stdio.h>

int main() {
    

    printf("Welcome!\n");

    printf("Enter numbers, input a negative when finished\n");
    int input = 0;
    int total = 0;
    int amount = 0;
    int average = 0;

    
    while (input != -1)
    {
        printf("Enter a number: ");
        scanf("%d", &input);
        total += input;
        amount++;

    }

    average = total / amount;
    printf("Average: %d\n", average);

    return 0;
    
}