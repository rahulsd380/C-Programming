#include <stdio.h>
int main()
{
    int arraySize;
    scanf("%d", &arraySize);
    int array[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        scanf("%d", &array[i]);
    }
    int i = 0;
    int j = arraySize - 1;
    while (i < j)
    {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;

        i++;
        j--;
    }
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}