/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:59:39 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/23 14:25:17 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int count_words(const char *s, char c);
static char **populate_array(char **arr, const char *s, char c);
static void free_everything(char **arr, size_t len);

char    **ft_split(const char *s, char c)
{
    char            **ptr;
    
    if (!s || count_words(s, c) == 0)
        return (ft_calloc(1, sizeof (char *)));
    ptr = (char **) ft_calloc(count_words(s, c) + 1, sizeof (char *));
    if (!ptr || !populate_array(ptr, s, c))
        return (NULL);
    return (ptr);
}

static unsigned int count_words(const char *s, char c)
{
    unsigned int    counter;
    unsigned int    i;

    i = 0;
    counter = 0;
    while (s[i])
    {
        if (s[i] != c && (i == 0 || s[i - 1] == c))
            counter++;
        i++;
    }
    return (counter);
}

static char **populate_array(char **arr, const char *s, char c)
{
    unsigned int    i;
    unsigned int    start;
    unsigned int    end;
    char            *ptr;

    i = 0;
    start = 0;
    while (i < count_words(s, c))
    {
        while (s[start] && s[start] == c)
            start++;
        end = start + 1;
        while (s[end] && s[end] != c)
            end++;
        ptr = ft_substr(s, start, end - start);
        if (!ptr)
        {
            free_everything(arr, count_words(s, c) + 1);
            return (NULL);
        }
        arr[i] = ptr;
        i++;
        start = end;        
    }
    return (arr);
}

static void free_everything(char **arr, size_t len)
{
    size_t  i;

    i = 0;
    while (i < len)
    {
        free(arr[i]);
        i++;
    }
    free(arr);
}