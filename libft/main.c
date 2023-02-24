/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-vaul <mde-vaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:51:10 by mde-vaul          #+#    #+#             */
/*   Updated: 2022/12/09 19:02:49 by mde-vaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void	test_char(int (*fun1)(int), int (*fun2)(int), char *name);
void	test_strlen(int max);
void	test_strchr(int max);
void	test_itoa(void);

int	main(void)
{
	char	**tabstr;
	int		i;

	srand(time(NULL));
	test_char(&ft_isalpha, &isalpha, "isalpha");
	test_char(&ft_isdigit, &isdigit, "isdigit");
	test_char(&ft_isalnum, &isalnum, "isalnum");
	test_char(&ft_isascii, &isascii, "isascii");
	test_char(&ft_isprint, &isprint, "isprint");
	test_strlen(500000);
	test_strchr(500000);
	tabstr = ft_split("lorem ipsum dolor sit amet, consectet    ", ' ');
	if (!tabstr)
		printf("NULL\n");
	else
	{
		i = 0;
		while (tabstr[i] != NULL)
		{
			printf("%d - %s\n", i, tabstr[i]);
			i++;
		}
	}
}
/* 	printf("\n^ TESTER ^\nv OWNED v\n\n");
	i = -1;
	while (tabstr[++i])
		printf("%d - %s\n", i, tabstr[i]);
	printf("%d - %s\n", i, tabstr[i]); */
//	test_itoa();

// General test trying all numbers in characters.
void	test_char(int (*fun1)(int), int (*fun2)(int), char *name)
{
	int	i;
	int	err;

	i = -512;
	err = 0;
	printf("\n------------ Test : %s ------------\n", name);
	while (i++ < 512)
	{
		if (fun1(i) != fun2(i))
		{
			printf("Error at char #%i. Output not matching.\n", i);
			err = 1;
		}
	}
	if (err == 1)
		printf("Test failed! Check previous messages for details.\n");
	else
		printf("Test passed!\n");
}

// Tries function with random strings, up to 'max' character of length.
void	test_strlen(int max)
{
	int		i;
	char	*s;
	int		err;

	s = (char *)malloc((max + 1) * sizeof(char));
	err = 0;
	i = 0;
	printf("\n------------ Test : strlen ------------\n");
	while (++i < max)
	{
		if (ft_strlen(s) != strlen(s))
		{
			printf("Error at char #%i. Output not matching.\n", i);
			err = 1;
		}
		s[i] = rand();
		s[i + 1] = 0;
	}
	if (err == 1)
		printf("Test failed! Check previous messages for details.\n");
	else
		printf("Test passed!\n");
	free(s);
}

void	test_strchr(int max)
{
	char	*s;
	int		l;
	int		i;
	int		err;

	i = 0;
	err = 0;
	s = (char *)malloc((max + 1) * sizeof(char));
	printf("\n------------ Test : strchr ------------\n");
	while (++i < max)
	{
		l = rand();
		if (ft_strlen(s) != strlen(s))
		{
			printf("Error at char #%i. Output not matching.\n", i);
			err = 1;
		}
		s[i] = rand() % 512;
		s[i + 1] = 0;
	}
	if (strchr(s, l) != ft_strchr(s, l) || err == 1)
		printf("Test failed! Check previous messages for details.\n");
	else
		printf("Test passed!\n");
	free(s);
}

void	test_itoa(void)
{
	int		i;
	char	*curr;

	i = -500;
	while (++i <= -99)
	{
		curr = ft_itoa(i);
		printf("ft_itoa of %i\t%s\n", i, curr);
		free(curr);
	}
	curr = ft_itoa(-1000);
	printf("ft_itoa of %i\t%s\n", -1000, curr);
	free(curr);
}
