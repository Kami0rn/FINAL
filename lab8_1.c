#include <stdio.h>
#include <string.h>
int main (void)
{
    char name[4][20]= {"G. washington","J. Adams","T. Jefferson","J. madison"};
    char init[4][20],last[4][20];
    for (int i = 0; i < 4; i++)
    {
        strncpy(init[i],name[i],3);
        init[i][3]='\0';
        
    }
    for (int i = 0; i < 4; i++)
    {
        strncpy(last[i],&name[i][3],20);
        //last[i][20]
    }
    printf("Initial First Name\t\tLast Name\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%19s %21s\n",init[i],last[i]);
    }
    

     
    



    return (0);
}
