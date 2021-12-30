/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin </var/spool/mail/edpaulin>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 15:18:54 by edpaulin          #+#    #+#             */
/*   Updated: 2021/12/29 15:18:56 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zesh.h"

void	print_prompt_1(void)
{
	ft_putstr_fd("$ ", 1);
}

void	print_prompt_2(void)
{
	ft_putstr_fd("> ", 1);
}