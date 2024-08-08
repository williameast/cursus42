/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:11:47 by weast             #+#    #+#             */
/*   Updated: 2024/08/08 15:18:33 by weast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "get_next_line_utils.c"
#include <stdio.h>

// this uses a dirty hack to avoid having to use strcpy.
t_node	*instantiate_node(const char *data)
{
    t_node	*new_node;

    new_node = (t_node *)malloc(sizeof(t_node));
    if (new_node == NULL)
        return (NULL);
    new_node->buffer[0] = '\0';
    ft_strlcat(new_node->buffer, data, BUFFER_SIZE);
    new_node-> link = NULL;
    return (new_node);
}

void	append_node(t_node **head, const char *data)
{
    t_node	*new_node;
    t_node	*current_node;

    new_node = instantiate_node(data);

    if (*head == NULL)
        *head = new_node;
    else
    {
        current_node = *head;
        while (current_node->link != NULL)
            current_node = current_node->link;
    current_node->link = new_node;
    }
}
int check_for_terminator(t_node *head)
{
    t_node *current;
    int	i;

    i = 0;
    current = head;
    while (current != NULL)
    {
        while (i < BUFFER_SIZE)
        {
            if (current->buffer[i] == '\n' || current->buffer[i] == '\0')
                return i;  // Found newline or EOF
    printf("%i\n", i);
            i++;
        }
        current = current->link;
    }
    printf("%i\n", i);
    return i;
}

void	append_output_string(t_node *head, char *str)
{
    // str buffer should be calculated beforehand.
    // cant you just get the strlen of the last buffer?

    int	strlen;
    char	*result;

    strlen = 0;
    while(head != NULL)
    {
        strlen += ft_strlen(head->buffer);
        head = head->link;
    }

    result = malloc(strlen + 1); //remember to check allocation was success!
    result[0] = '\0';

    while(head != NULL)
    {
        strlen += ft_strlen(head->buffer);
        head = head->link;
    }



}


void	get_full_string(t_node *head)
{
    t_node *current_node;
    int	strlen;
    char	*result;
    int	i;

    i = 0;
    strlen = 0;
    current_node = head;
    while(current_node != NULL)
    {
        strlen += ft_strlen(current_node->buffer);
        current_node = current_node->link;
    }
    result = malloc(strlen + 1); //remember to check allocation was success!
    result[0] = '\0';
    current_node = head;

    while(current_node != NULL)
    {
        ft_strlcat(result, current_node->buffer, check_for_terminator(current_node));
        current_node = current_node->link;
    }
    printf("%s\n", result);
    free(result);

}
int main() {
    t_node *head;
    t_node *current_node;

    head = NULL;
    char *test_buf = "this is a test string! I have many things to sa";
    char *test_buf2 = "another piece of info.";
    char *test_buf3 = "I love the noise\n Df farts.";
    char *test_buf4 = "how do you do!.";

    append_node(&head, test_buf);
    append_node(&head, test_buf2);
    append_node(&head, test_buf3);
    append_node(&head, test_buf4);
    current_node = head;
    /* while(current_node != NULL) */
    /* { */
    /*     printf("%s\n", current_node->buffer); */
    /*     current_node = current_node->link; */
    /* } */

    get_full_string(head);

    return 0;
}


/* char	*get_next_line(int fd) */
/* { */

/*     static t_node	*list; */

/*     list = NULL; */

/*     //check if file descriptor and buffer are valid */
/*     if (fd < 0 || BUFFER_SIZE <= 0) */
/*         return (NULL); */

/*     if (check_for_terminator(list)) */
/*         get_full_string(list); */
/*     else */
/*         return (NULL); */

/* } */

