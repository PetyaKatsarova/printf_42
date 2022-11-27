/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_num.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pkatsaro <pkatsaro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/23 18:05:24 by pkatsaro      #+#    #+#                 */
/*   Updated: 2022/11/27 10:29:52 by pkatsaro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

int ft_print_num(int n)
{
    int len;
    char *num;

    len = 0;
    num = ft_itoa(n); // convert to alpha
    len = ft_printstr(num);
    free(num);
    return (len);
}