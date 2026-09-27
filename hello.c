#include <stdio.h>

// Function that accepts a name and prints a personalized greeting
void greet(char *name)
{
    printf("Hello, %s! Welcome to Live Share collaboration.\n", name);
}

int main()
{
    char name[50];
    printf("Enter your name: ");
    scanf("%49s", name);

    greet(name);
    return 0;
}