/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-vaul <mde-vaul@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 23:35:48 by mde-vaul          #+#    #+#             */
/*   Updated: 2023/03/18 17:04:11 by mde-vaul         ###   ########.fr       */
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

	printf("I - %d\n", printf("qwerty %s\t%d\t%x\n", "stroka1", 2147483647, -42));
	printf("II - %d\n", ft_printf("qwerty %s\t%d\t%x\n", "stroka2", 2147483647, -42));
	
	printf("I  - %d\n",   printf("qwerty %s\t%x\t%x\t%i\t%d\t%ld\t%s\t%lX\t%c\n", "stroka1", 2147483647, -42, 7657382, 2147483647, -2147483648, "", -2147483648, '^'));
	printf("II - %d\n", ft_printf("qwerty %s\t%x\t%x\t%i\t%d\t%d\t%s\t%X\t%c\n", "stroka2", 2147483647, -42, 7657382, 2147483647, -2147483648, "", -2147483648, '^'));

	printf("I - %d\n", ft_printf("qwerty %c\t%p\t%u\n", -1, 8555210, -42));
	printf("II - %d\n", ft_printf("qwerty %x\t%X\t%%%% %i", 2019, 2019, -10));
	ft_printf("%%%\n");


    int        a, b;

    char    *str2 = "cause";
    int        i = -30;
    int        y = 69;
    int        *ptr = &i;

    printf("\033[0;1mMANDATORY PART\033[0m\n");

    printf("\033[0;36;1mORIGINAL:\033[2m\n");
    a = printf("I like turtles %s %d%%\nError %cdata at %p -> %x %X\nPwease wait %i%u seconds.. %s\n\n", str2, y, '\0', ptr, i, -i, -y, -y, (char *) 0);

    printf("\033[0;34;1mREMAKE:\033[2m\n");
    b = ft_printf("I like turtles %s %d%%\nError %cdata at %p -> %x %X\nPwease wait %i%u seconds.. %s\n\n", str2, y, '\0', ptr, i, -i, -y, -y, (char *) 0);

    printf("\033[0;33;1mCOMPARAISONS:\033[2m\n");
    printf("Original: [%d] VS Function: [%d] ", a, b);
    if (a == b)
        printf("\033[0;32m(Good)\033[0m\n\n");
    else
    {
        printf("\033[0;31m(Bad: %d diff)\n\n", b - a);
        printf("\033[0;33mChecking issues..");

        printf("\n < Origin [No %%] Func > ");
        a = printf("Hello World");
        b = ft_printf("Hello World");
        printf("\nOrigin: %d // Func: %d // Diff: %d\n", a, b, b - a);

        printf("\n < Origin [%%%%] Func > ");
        a = printf("%%");
        b = ft_printf("%%");
        printf("\nOrigin: %d // Func: %d // Diff: %d\n", a, b, b - a);

        printf("\n < Origin [%%c] Func > ");
        a = printf("%c", 'a');
        b = ft_printf("%c", 'a');
        printf("\nOrigin: %d // Func: %d // Diff: %d\n", a, b, b - a);

        printf("\n < Origin [%%c (NUL)] Func > ");
        a = printf("%c", 0);
        b = ft_printf("%c", 0);
        printf("\nOrigin: %d // Func: %d // Diff: %d\n", a, b, b - a);

        printf("\n < Origin [%%d] Func > ");
        a = printf("%d", 6886);
        b = ft_printf("%d", 6886);
        printf("\nOrigin: %d // Func: %d // Diff: %d\n", a, b, b - a);

        printf("\n < Origin [%%u] Func > ");
        a = printf("%u", -460);
        b = ft_printf("%u", -460);
        printf("\nOrigin: %d // Func: %d // Diff: %d\n", a, b, b - a);

        printf("\n < Origin [%%s] Func > ");
        a = printf("%s", "je suis le %s");
        b = ft_printf("%s", "je suis le %s");
        printf("\nOrigin: %d // Func: %d // Diff: %d\n", a, b, b - a);

        printf("\n < Origin [%%i] Func > ");
        a = printf("%i", 324);
        b = ft_printf("%i", 324);
        printf("\nOrigin: %d // Func: %d // Diff: %d\n", a, b, b - a);

        printf("\n < Origin [%%x] Func > ");
        a = printf("%x", 46798);
        b = ft_printf("%x", 46798);
        printf("\nOrigin: %d // Func: %d // Diff: %d\n", a, b, b - a);

        printf("\n < Origin [%%X] Func > ");
        a = printf("%X", -413);
        b = ft_printf("%X", -413);
        printf("\nOrigin: %d // Func: %d // Diff: %d\n", a, b, b - a);

        printf("\n < Origin [%%p] Func > ");
        a = printf("%p", ptr);
        b = ft_printf("%p", ptr);
        printf("\nOrigin: %d // Func: %d // Diff: %d\n", a, b, b - a);

        printf("\nIf everything above seems correct...\nThen the problem is somewhere else.\n");
    }

    printf("\033[33;1mHANDLES NULL STRING?\033[0;31m\n");
    ft_printf(0);
    printf("\033[32mNull Format Handled!\033[0m\n");
    return (0);
}
