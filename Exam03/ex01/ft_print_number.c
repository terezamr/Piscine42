/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvicente <mvicente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:30:56 by mvicente          #+#    #+#             */
/*   Updated: 2022/08/25 14:32:13 by mvicente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}

int main(void)
{
	ft_print_numbers();
}