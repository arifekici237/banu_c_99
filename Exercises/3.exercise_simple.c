// Take a single character  as input, you may benefit from scanf("%c", &ch ); and print("%c", ch) to print the character. 
// Write a program to print the ASCII value of the given character.
#include <stdio.h>
#include <string.h>
#define user "arif"
#define pass "123Pass!"        
int main()
{
    char username[20], password[20];

    //-----LOGIN PHASE-----
    printf("Please Enter username:");
    scanf("%s", &username);

    printf("\nPlease enter password:");
    scanf("%s", &password);
    
    

        printf("Wrong username or password try again!\n");

        printf("\nPlease Enter username:");
        scanf("%s", &username);

        printf("\nPlease enter password:");
        scanf("%s", &password);

    
    while (strcmp(username, user) != 0 && strcmp(password, pass) != 0);

    printf("Correct username and password.\n\nWelcome Mrs.arif!\n\nWhat would you like to do?");
    //-----END OF LOGIN PHASE-----
    return 0;}
