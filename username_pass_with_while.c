#include <stdio.h>
#include <string.h>
#define user "arif"
#define pass "123Pass!"        
int main()
{
    char username[20], password[20];

  
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
   
    return 0;}
