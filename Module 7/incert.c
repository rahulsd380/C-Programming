#include<stdio.h>
int main() {
    int arraySize;
    scanf("%d", &arraySize);
    int arr[arraySize + 1];
    for(int i=0; i<arraySize; i++){
        scanf("%d", &arr[i]);
    }
    int index, value;
    scanf("%d %d", &index, &value);

    for(int i=arraySize; i>= index+1; i--){
        arr[i] = arr[i-1];
    }
    arr[index] = value;

    for(int i=0; i <= arraySize; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}