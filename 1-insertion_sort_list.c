#include "sort.h"


/**
 * insertion_sort_list - function that sorts a doubly linked
 * list of integers in ascending order using the Insertion sort algorithm
 *
 * @list: list to be sorted
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *forw, *insert, *tmp:

	if (list == NULL || *list == NULL || (*list)->next ==NULL)
		return;

	for (forw = (*list)->next; forw != NULL; forw = tmp)
	{
		tmp = forw->next;
		insert = forw->prev;
		while (insert != NULL && forw->n < insert->n)
		{
			swap(list, & insert, forw);
			print_list((const listint_t *)*list);
		}
	}
}


/**
 * swap - swap two nodes
 * @head: head of the node
 * @first: first node to be swaped
 * @second: second node to be swaped
 * Return: void
 */

void swap(listint_t **head, listint_t *first, listint_t *second)
{
	listint_t *prev, *next;

	prev = first->prev;
	next = second->next;

	if (prev != NULL)
		prev->next = second;
	else
		*head = second;

	first->prev = second;
	first->next = next;
	second->prev = prev;
	second->next = first;
	if (next)
		next->prev = first;
}
