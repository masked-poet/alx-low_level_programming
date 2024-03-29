#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Prints all the elements of a list_t list
 *
 *   * @h: Heady of the list
 *
 *    * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	
	 size_t num = 0;
	 
	 while (h)
	{
		printf("%d\n", h->n);/* (*h).n */
		h = h->next;/* (*h).next */
		 num++;
		  h = h->next;
}
return (num);
}
