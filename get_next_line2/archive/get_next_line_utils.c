/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:24:40 by weast             #+#    #+#             */
/*   Updated: 2024/08/01 16:02:29 by weast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct Node
{
    char *data;
    struct Node* next;
} Node;

int	ft_strlen(const char *s)
{
    int	i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}


Node* create_node(const char *data)
{
    Node *new_node;
    unsigned int	data_len;
    unsigned int	i;

    data_len = ft_strlen(data);
    i = 0;

    new_node = (Node*)malloc(sizeof(Node));
    if (!new_node)
        return NULL;
    new_node->data = malloc(data_len + 1);
    if (new_node->data == NULL)
        return NULL;
    while (i < data_len)
    {
        new_node->data[i] = data[i];
        i++;
    }
    new_node->data[i] = '\0';
    new_node->next = NULL;
    return(new_node);
}

void	append_list(Node **head, const char *data)
{
    Node *new_node;
    Node *last_node;

    new_node = create_node(data);

    if (!new_node)
        return;
    last_node = *head;
    if (!*head)
    {
        *head = new_node;
    	return;
    }

    while (last_node->next != NULL)
        last_node = last_node->next;

    last_node->next = new_node;
}

void print_list(Node *node)
{
    while (node != NULL)
        {
            write(1, node->data, ft_strlen(node->data));
            node = node->next;
        }
    write(1, "done!\n", 6);
}

void free_list(Node* head)
{
    Node *temp;
    while (head != NULL)
        {
            temp = head;
            head = head->next;
            free(temp->data);
            free(temp);
        }
}

int main(void) {
    Node* head = NULL;  // Initialize an empty list

    // Append nodes to the list
    append_list(&head, "Hello");
    append_list(&head, "World");
    append_list(&head, "!");

    // Print the linked list
    print_list(head);

    // Free the linked list memory
    free_list(head);

    return 0;
}
