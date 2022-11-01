#include <stdio.h>
 
 void CF(int , int , int *);

 int main(void){
    int m=10, n=5 ;
    printf ("%d %d\n",m,n);
    printf ("%p %p\n",&m,&n);
    int *mp , *np ;
    printf ("%p %p",mp,np);
    mp = &m ;
    printf ("%p\n",&m);
    np = &n ;
    printf ("%p\n",&n);
    *mp = *mp + *np ;
    printf ("%d\n",*mp);
    *np = *mp - *np ; 
    printf ("%d\n",*np);
    printf("%d %d",m,n);

 }
