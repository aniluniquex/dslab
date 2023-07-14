#include<stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}

void selectionsort(int arr[], int n) {
    int i, j, minIndex;

    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(&arr[i], &arr[minIndex]);
    }
}

void printarray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
        
    }
        printf("\n");    
}



int main(){

    int arr[] = {10,18,96,5,23,48,86};
    int n = sizeof(arr)/sizeof(arr[0]);


    printf("original array:\n");
    printarray(arr,n);

    selectionsort(arr,n);
    
    
    printf("sorted array:\n");
    printarray(arr,n);



}