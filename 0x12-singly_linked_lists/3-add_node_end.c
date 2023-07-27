#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Pointer to the head of the linked list.
 * @str: String to be added to the linked list.
 *
 * Return: On success, returns the address of the newly added node.
 *         On failure or if `str` is NULL, returns NULL.
 */

list_t *add_node_end(list_t **head, const char *str)
{
    /* Allocate memory for the new node */
    list_t *new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);

    /* Duplicate the input string */
    char *dup = strdup(str);
    if (dup == NULL)
    {
        free(new);
        return (NULL);
    }

    /* Calculate the length of the string */
    int len;
    for (len = 0; str[len]; len++)
        ;

    /* Fill in the new node with the data */
    new->str = dup;
    new->len = len;
    new->next = NULL;

    /* If the list is empty, set the new node as the head */
    if (*head == NULL)
        *head = new;
    else
    {
        /* Traverse the list to find the last node */
        list_t *last = *head;
        while (last->next != NULL)
            last = last->next;

        /* Add the new node to the end of the list */
        last->next = new;
    }

    return (*head);
}

