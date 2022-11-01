#include<stdio.h>

void readData (int *, int *,int *,int *);
void order (int *,int *);
void printDATA (int ,int ,int ,int);

int main (void)
{
    int n1,n2,n3,n4 ;
    readData (&n1,&n2,&n3,&n4);
    order (&n1,&n2);
    order (&n2,&n3);
    order (&n3,&n4);
    order (&n2,&n3);
    order (&n1,&n2);
    order (&n2,&n3);
    printDATA (n1,n2,n3,n4);


}
void readData(int *n1,int *n2,int *n3,int *n4)
{
    printf ("Enter numbers separated by blanks> ");
    scanf("%d %d %d %d",n1,n2,n3,n4);
}

void order(int *n1 , int *n2)
{
    int n3 ;
    if (*n1>*n2)
    {
         n3=*n2;
        *n2=*n1;
        *n1=n3;
    }

   
    
}
void printDATA(int n1 , int n2 , int n3 ,int n4)
{
    printf ("num1: %d\n",n1);
    printf ("num2: %d\n",n2);
    printf ("num3: %d\n",n3);
    printf ("num4: %d",n4);
}

