#ifndef SORT_H_
#define SORT_H_
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Boubly linked list node
 * 
 * @n: integer stored in the node
 * @prev: Pointer to the previous element oif the list
 * @next: Pointer to the next element of the list
 */

typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* printing functions*/
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/* Sorting functions */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
#endif
