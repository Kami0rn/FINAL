#include <stdio.h>

int main(void)

{
    int num, i;
    printf("Please enter number of students> ");
    scanf("%d", &num);
    double arr[num], count;
    for (i = 0; i < num; i++)
    {
        printf("Please enter student height [%d]> ",( i + 1));
        scanf("%lf", &arr[i]);
    }
    double sum = 0;
    for (i = 0; i < num; i++)
    {

        sum += arr[i];
    }
    count = sum / num;
    printf("%.2lf", count);
    return (0);
}