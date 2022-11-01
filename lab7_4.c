#include<stdio.h>
 void 
 int main ()
 {
    int A[3][3] = {{1,3,2},{1,0,0},{1,2,2}};
    int B[3][3] = {{0,0,5},{7,5,0},{2,1,1}};
    int C[3][3] = {{1,3,2},{1,0,0},{1,2,2}};
    


    printf ("Matrix A:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",A[i][j]);

        }
        printf("\n");
    }
    printf ("Matrix B:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",B[i][j]);

        }
        printf("\n");
    }
    
    printf ("Matrix C:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",A[i][j]+B[i][j]);

        }
        printf("\n");
    }

 

 }