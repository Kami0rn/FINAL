#include <stdio.h>
 #include <string.h>
 int main(void){
    char a[10],b[10];
    printf("Enter something: ");
    scanf("%s",&a);
    strcpy(b,a);
    strrev(a);
    if (strcmp (a,b) == 0 ){
        printf("%s is a palindrome.",a);
    }
    else{
        printf("%s is not a palindrome and its reverse is %s. ",b,a);
     }
     return 0;
    }
