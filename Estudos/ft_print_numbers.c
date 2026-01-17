# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_print_numbers                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/16 22:06:09 by marvin            #+#    #+#              #
#    Updated: 2026/01/16 22:06:09 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include <unistd.h>
void ft_print_nunbers (void)
{
    char    c;

    c = '0';
    while (c <= '9')
    {
        write(1, &c, 1);
        c++;
    }
}   
//*/
int main (void)
{
    ft_print_nunbers();
    return (0);
}  
//*/