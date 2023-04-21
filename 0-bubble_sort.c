#include "sort.h"

/**
 * bubble_sort -Sorts with Bubble Sort 
 * @array:Array to sort 
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	/*
	 * start at index 0,
	 * Go until index size-2(zero index, comparing to index + 1)
	 * if index is > index + 1 : Swap;
	 */
	size_t index, counterIndex;

	for (counterIndex = 1; counterIndex !=0;)

