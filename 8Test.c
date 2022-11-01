#include<stdio.h>

void printArray (int a[] , int);
void getValues(int[],int);

int main (void) 
{   
    int arrSize ;

    printf ("Enter size of array: ");
    scanf("%d ",&arrSize);

    int arr[arrSize];
    int arr[5]= {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    for( int i = 0 ; i < size ; i++){
        int arr[5] = {1,2,3,4,5};
        int size = sizeof(arr)/sizeof(arr[0]);
    }
    printf("Size of array : %lu\n",sizeof(arr));
    printf("Size of element : %lu\n", sizeof(arr[0]));

    for (int i = 0 ; i < 5 ; i++ ) 
    {
        printf ("%d \t " , arr[i]);
    }
    printArray(int a[],int s);
    return (0);
}

void printArray (int a[],int s)
{
    for ( int i = 0 ; i , s ; i++)
    {
        printf("%d\t",a[i]);
    }
}
void getValues ()

}