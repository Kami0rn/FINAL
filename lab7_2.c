#include <stdio.h>

void readData (int *);
void findFibonacci (int[] , int);
void printFibonacci (int[] , int);
int main(void)
{
    int num,sum,n1,n2;
    readData (&num);
    int arrFi[num];
    findFibonacci (arrFi,num);
    printFibonacci (arrFi,num);

    
}
void readData (int *num)
{
    printf("Please enter a number for the Fibonacci sequence> ");
    scanf ("%d",num);
}
void findFibonacci (int a[],int s)
{
    a[0] = 0 ;
    a[1] = 1 ;
    for (int i = 2  ; i < s ; i++ )
    {
        a[i]=a[i-1]+a[i-2];
    }
}
void printFibonacci (int a[] , int s )
{
    printf ("Index  Element");
    for (int i = 0 ; i<s ; i++ )
    {
        printf ("\n%3d%9d",i,a[i]);
    }
}