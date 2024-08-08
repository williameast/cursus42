#include "lists.h"


typedef struct s_node
{
    char *data;
    int	fd;
    struct s_node* next;
} t_node;


t_node *create_node(const char *data)
{
    t_node *new_node;
    unsigned int	data_len;
    unsigned int	i;

    data_len = ft_strlen(data);
    i = 0;

    new_node = (t_node*)malloc(sizeof(t_node));
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

void	append_list(t_node **head, const char *data)
{
    t_node *new_node;
    t_node *last_node;

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

void print_list(t_node *node)
{
    while (node != NULL)
        {
            write(1, node->data, ft_strlen(node->data));
            write(1, " -- > ", 6);
            node = node->next;
        }
    write(1, "END OF LIST!", 12);
}

void free_list(t_node* head)
{
    t_node *temp;
    while (head != NULL)
        {
            temp = head;
            head = head->next;
            free(temp->data);
            free(temp);
        }
}

/* char	*get_next_line(void) */
/* { */
/*     static t_node *current_node = NULL; */
/*     char	*line; */

/*     if (current_node == NULL) */
/*         return NULL; */

/*     line =  */



/* } */

int main(void)
{
    t_node* head = NULL;  // Initialize an empty list

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
