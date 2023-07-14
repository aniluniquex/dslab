#include<stdio.h>

int linearsear(int arr[],int n,int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
       
    }
    return -1; 
}

int main(){

    int arr[] = {10,20,55,36};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 55;


    int result = linearsear(arr,n,key);

    if (result==-1)
    {
        printf("Element not found!");
    }
    else
    {
        printf("Element found at index %d",result);
    }
    
    return 0;

}