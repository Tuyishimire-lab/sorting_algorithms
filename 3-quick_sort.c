#include "sort.h"
/**
 * Partitition - for  spliting our array
 * @array: array to take in
 * @start: array beginning
 * @end: array ending part
 * @size: the whole array
 * Return: position of pivot
 * 
 */

int partitition(int *array, int start, int end, int size){
    int pivot = array[end];
    int i = start, j, temp;

    for(j = start; j<end; j++)
    {
        if(array[j]<= pivot)
        {
            if(i != j)
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                print_array(array, size);
            }
            i++;
        }
    }
    if(i != end)
    {
        temp =array[i];
        array[i] = array[end];
        array[end] =temp;
        print_array(array, size);
    }
    printf("return i = %d\n", i);
    return(i);
}
/**
 * QuickSort -quick sorts with recursion
 * @array: array to sort through
 * @start: beginning of array
 * @end: end of array or its sub
 * size: size of full array
 * 
 */
void quickSort(int *array, int start, int end, int size){
    int pivot;
    if(start < end)
    {
        pivot = partitition(array, start, end, size);
        printf("first recursive, start[%d] to pivot-a[%d]\n", start, pivot-1);
        quickSort(array, start, pivot - 1, size);
        printf("second recursive, pivot+1 [%d] to end [%d]\n", pivot + 1, end);
        quickSort(array, pivot + 1, end, size);
    }
}
/**
 * quick_sort -quick sort an array 
 * @array: array to sort
 * @size: size of array
 * 
 */
void quick_sort(int *array, size_t size){
    if(array == NULL || size < 2)
        return;
    quickSort(array, 0, size - 1, size);
}
