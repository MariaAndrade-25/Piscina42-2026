/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:27:06 by marvin            #+#    #+#             */
/*   Updated: 2026/01/16 15:27:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
    
void	ft_print_alphabet(void)
{
    char	c;

    c = 'a';
    while (c <= 'z')
    {   
        write(1, &c, 1);
    }
    c++;
}

    int main (void)
{
    ft_print_alphabet();
    return (0);
}

