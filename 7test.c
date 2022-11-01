#include <stdio.h>

void readDT(int *, int *, int *);
double fineAverage (int , int , int); 
 
int main (void)
{
    int n1,n2,n3 ;
    double average ;

    printf ("Enter three integers> ");
    scanf ("%d %d %d", &n1, &n2 , &n3);
    printf ("n1 = %d , n2 = %d ,n3 = %d\n ",n1,n2,n3);
    average = fineAverage(n1,n2,n3);
    printf ("Avrage = %lf\n",average);



    return (0);
}

double fineAverage (int nx ,int ny ,int nz)
{
    double avr = (nx + ny + nz)/3.0 ;
    return (avr) ;
}
void readDT(int *xp ,int *yp ,int *zp)
{
    printf("Enter three integer> ");
    scanf ("%d %d ");

}