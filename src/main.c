/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin </var/spool/mail/edpaulin>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 15:18:48 by edpaulin          #+#    #+#             */
/*   Updated: 2021/12/29 15:18:51 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zesh.h"

int	main(void)
{
	int	ret;

	ret = get_input();
	return (ret - 1);
}
