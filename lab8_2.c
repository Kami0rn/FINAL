#include <stdio.h>
#include <string.h>
#define LEN 20

int main (void)
{
    char last[15],first[15] ;
    char full[LEN] = {};
    printf("Enter your last name> ");
    scanf ("%s",last);
    printf("Enter your first name> ");
    scanf ("%s",first);
    //strncat(full,last,LEN);
    if (strlen(first)+strlen(last)+strlen(" ")<LEN)
    {
        strcpy(full,first);
        strcat(full," ");
        strcat(full,last);
        printf("%s",full);
    }
    else
    {
        strncpy(full,first,1);
        strcat(full,". ");
        strcat(full,last);
        printf("%s",full);
        
    }
    

    



    return (0);
}