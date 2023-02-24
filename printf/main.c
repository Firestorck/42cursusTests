/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-vaul <mde-vaul@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 23:35:48 by mde-vaul          #+#    #+#             */
/*   Updated: 2023/02/21 16:08:00 by mde-vaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("%X%p\n", 63, (void *)63);
	printf("%X%p\n", 63, (void *)63);

	char *str = NULL;
	printf("\n\nTEST %%s\n\n");
	printf("\n___TEST %%s___\n");
	printf("No original - %d\n", ft_printf("|%s|\n", str));
	printf("Original - %d\n", printf("|%s|\n", str));

	printf("\n___TEST %%ss___\n");
	printf("No original - %d\n", ft_printf("|%ss|\n", str));
	printf("Original - %d\n", printf("|%ss|\n", str));

	printf("\n___TEST %%20s___\n");
	printf("No original - %d\n", ft_printf("|%20s|\n", str));
	printf("Original - %d\n", printf("|%20s|\n", str));

	printf("\n___TEST %%2s___\n");
	printf("No original - %d\n", ft_printf("|%2s|\n", str));
	printf("Original - %d\n", printf("|%2s|\n", str));

	printf("\n___TEST %%.2s___\n");
	printf("No original - %d\n", ft_printf("|%.2s|\n", str));
	printf("Original - %d\n", printf("|%.2s|\n", str));

	printf("\n___TEST %%.20s___\n");
	printf("No original - %d\n", ft_printf("|%.20s|\n", str));
	printf("Original - %d\n", printf("|%.20s|\n", str));

	printf("\n___TEST %%2.20s___\n");
	printf("No original - %d\n", ft_printf("|%2.20s|\n", str));
	printf("Original - %d\n", printf("|%2.20s|\n", str));

	printf("\n___TEST %%22.20s___\n");
	printf("No original - %d\n", ft_printf("|%22.20s|\n", str));
	printf("Original - %d\n", printf("|%22.20s|\n", str));

	printf("\n___TEST %%12.20s___\n");
	printf("No original - %d\n", ft_printf("|%12.20s|\n", str));
	printf("Original - %d\n", printf("|%12.20s|\n", str));

	printf("\n___TEST %%12.s___\n");
	printf("No original - %d\n", ft_printf("|%12.s|\n", str));
	printf("Original - %d\n", printf("|%12.s|\n", str));

	printf("\n___TEST %%.s___\n");
	printf("No original - %d\n", ft_printf("|%.s|\n", str));
	printf("Original - %d\n", printf("|%.s|\n", str));

	printf("\n___TEST %%20.s___\n");
	printf("No original - %d\n", ft_printf("|%20.s|\n", str));
	printf("Original - %d\n", printf("|%20.s|\n", str));

	printf("\n___TEST %%2.s___\n");
	printf("No original - %d\n", ft_printf("|%2.s|\n", str));
	printf("Original - %d\n", printf("|%2.s|\n", str));

	printf("ft_printf = %d\n printf = %d\n", ft_printf("salut\nlol\txD%s\n", "ca m\narche"), printf("salut\nlol\txD%s\n", "ca m\narche"));

	printf("\n\nTEST %%d\n\n");
	int num = 0;
	printf("\n___TEST %%d___\n");
	printf("No original - %d\n", ft_printf("|%d|\n", num));
	printf("Original - %d\n", printf("|%d|\n", num));

	printf("\n___TEST %%dd___\n");
	printf("No original - %d\n", ft_printf("|%dd|\n", num));
	printf("Original - %d\n", printf("|%dd|\n", num));

	printf("\n___TEST %%20d___\n");
	printf("No original - %d\n", ft_printf("|%20d|\n", num));
	printf("Original - %d\n", printf("|%20d|\n", num));

	printf("\n___TEST %%2d___\n");
	printf("No original - %d\n", ft_printf("|%2d|\n", num));
	printf("Original - %d\n", printf("|%2d|\n", num));

	printf("\n___TEST %%.2d___\n");
	printf("No original - %d\n", ft_printf("|%.2d|\n", num));
	printf("Original - %d\n", printf("|%.2d|\n", num));

	printf("\n___TEST %%.20d___\n");
	printf("No original - %d\n", ft_printf("|%.20d|\n", num));
	printf("Original - %d\n", printf("|%.20d|\n", num));

	printf("\n___TEST %%2.20s___\n");
	printf("No original - %d\n", ft_printf("|%2.20d|\n", num));
	printf("Original - %d\n", printf("|%2.20d|\n", num));

	printf("\n___TEST %%22.20d___\n");
	printf("No original - %d\n", ft_printf("|%22.20d|\n", num));
	printf("Original - %d\n", printf("|%22.20d|\n", num));

	printf("\n___TEST %%12.20d___\n");
	printf("No original - %d\n", ft_printf("|%12.20d|\n", num));
	printf("Original - %d\n", printf("|%12.20d|\n", num));

	printf("\n___TEST %%12.d___\n");
	printf("No original - %d\n", ft_printf("|%12.d|\n", num));
	printf("Original - %d\n", printf("|%12.d|\n", num));

	printf("\n___TEST %%.d___\n");
	printf("No original - %d\n", ft_printf("|%.d|\n", num));
	printf("Original - %d\n", printf("|%.d|\n", num));

	printf("\n___TEST %%20.d___\n");
	printf("No original - %d\n", ft_printf("|%20.d|\n", num));
	printf("Original - %d\n", printf("|%20.d|\n", num));

	printf("\n___TEST %%2.d___\n");
	printf("No original - %d\n", ft_printf("|%2.d|\n", num));
	printf("Original - %d\n", printf("|%2.d|\n", num));

	printf("\n\nTEST %%x\n\n");
	unsigned int un = 0;
	printf("\n___TEST %%x___\n");
	printf("No original - %d\n", ft_printf("|%x|\n", un));
	printf("Original - %d\n", printf("|%x|\n", un));

	printf("\n___TEST %%xx___\n");
	printf("No original - %d\n", ft_printf("|%xx|\n", un));
	printf("Original - %d\n", printf("|%xx|\n", un));

	printf("\n___TEST %%20x___\n");
	printf("No original - %d\n", ft_printf("|%20x|\n", un));
	printf("Original - %d\n", printf("|%20x|\n", un));

	printf("\n___TEST %%2x___\n");
	printf("No original - %d\n", ft_printf("|%2x|\n", un));
	printf("Original - %d\n", printf("|%2x|\n", un));

	printf("\n___TEST %%.2x___\n");
	printf("No original - %d\n", ft_printf("|%.2x|\n", un));
	printf("Original - %d\n", printf("|%.2x|\n", un));

	printf("\n___TEST %%.20x___\n");
	printf("No original - %d\n", ft_printf("|%.20x|\n", un));
	printf("Original - %d\n", printf("|%.20x|\n", un));

	printf("\n___TEST %%2.20x___\n");
	printf("No original - %d\n", ft_printf("|%2.20x|\n", un));
	printf("Original - %d\n", printf("|%2.20x|\n", un));

	printf("\n___TEST %%22.20x___\n");
	printf("No original - %d\n", ft_printf("|%22.20x|\n", un));
	printf("Original - %d\n", printf("|%22.20x|\n", un));

	printf("\n___TEST %%12.20x___\n");
	printf("No original - %d\n", ft_printf("|%12.20x|\n", un));
	printf("Original - %d\n", printf("|%12.20x|\n", un));

	printf("\n___TEST %%12.x___\n");
	printf("No original - %d\n", ft_printf("|%12.x|\n", un));
	printf("Original - %d\n", printf("|%12.x|\n", un));

	printf("\n___TEST %%.x___\n");
	printf("No original - %d\n", ft_printf("|%.x|\n", un));
	printf("Original - %d\n", printf("|%.x|\n", un));

	printf("\n___TEST %%20.x___\n");
	printf("No original - %d\n", ft_printf("|%20.x|\n", un));
	printf("Original - %d\n", printf("|%20.x|\n", un));

	printf("\n___TEST %%2.x___\n");
	printf("No original - %d\n", ft_printf("|%2.x|\n", un));
	printf("Original - %d\n", printf("|%2.x|\n", un));

	printf("I - %d\n", printf("qwerty %s\t%ld\t%x\n", "stroka1", 214714814563, -42));
	printf("II - %d\n", ft_printf("qwerty %s\t%d\t%x\n", "stroka2", 214714814563, -42));
	

	printf("%d\n", ft_printf("qwerty %c\t%p\t%u\n", -1, 8555210, -42));
	printf("%d\n", ft_printf("qwerty %x\t%X\t%%%% %i", 2019, 2019, -10));
	ft_printf("%%%\n");
	return (0);
}
