#include<stdio.h>

void printMatrix(int [][3]);

int main(){
    int arrA[3][3]={{1,3,2},{1,0,0},{1,2,2}};
    int arrB[3][3]={{0,0,5},{7,5,0},{2,1,1}};
    int rowA = sizeof(arrA)/sizeof(arrA[0]);
    int colA = sizeof(arrA[0])/sizeof(arrA[0][0]);
    int arrC[rowA][colA];
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            arrC[i][j] = arrA[i][j]+arrB[i][j];
        }
    }
    printf("Matrix A:\n");
    printMatrix(arrA);
    printf("Matrix B:\n");
    printMatrix(arrB);
    printf("Matrix C:\n");
    printMatrix(arrC);

    return(0);
}
void printMatrix(int a[][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){ 
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
