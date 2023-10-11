#include "main.h"
/**
 * array_iterator - prints number of arguments passed
 * @array: tye int argument
 * @action: type char argument of strings
 * @size: type char argument of strings
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	 size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
 /** print_elem - prints number of arguments passed*/
void print_elem(int elem)
{
	printf("%d\n", elem);
}
 /** print_elem_hex - prints number of arguments passed*/
void print_elem_hex(int elem)
{
	printf("0x%x\n", elem);
}
