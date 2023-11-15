/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:37:27 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/03 22:02:24 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 0 && c <= 255);
}

/*
#include <stdio.h>

int	main(void)
{
	char  a = '1;
	printf("%d", ft_isdigit(a));
	return (0);
} */
