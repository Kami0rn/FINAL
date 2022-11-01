#include <stdio.h>

void readData (int *);
void calculateTime (int , int *,int *,int *);
void printDATA (int ,int ,int ,int);

int main (void)
{
    int t,s,m,h ;
    readData (&t);
    calculateTime (t , &s , &m , &h);
    printDATA(t,s,m,h);

}   

void readData(int *t)
{
    printf ("Enter time (in seconds) : ");
    scanf("%d",t);
}
void calculateTime (int t ,int *s,int *m,int *h)
{
    *h = t/3600 ;
    *m = (t-(3600*(*h)))/60;
    *s = (t-(3600*(*h)))-(*m*60);
}
void printDATA(int t , int s , int m ,int h)
{
    printf ("Time : %d seconds\n",t);
    printf ("Hour(s): %d\n",h);
    printf ("Minute(s): %d\n",m);
    printf ("Second(s): %d\n",s);
    
}