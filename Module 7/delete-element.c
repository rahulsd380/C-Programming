#include<stdio.h>
int main() {
    int arraySize;
    scanf("%d", &arraySize);
    int arr[arraySize];
    for(int i=0; i<arraySize; i++){
        scanf("%d", &arr[i]);
    }
    int index;
    scanf("%d", &index);

    for(int i=index; i < arraySize-1; i++){
        arr[i] = arr[i+1];
    }
    arraySize--;

    for(int i=0; i<arraySize; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}