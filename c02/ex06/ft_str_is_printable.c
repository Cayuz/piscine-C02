/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/20 13:00:07 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/06/21 21:47:40 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
		{
			i++;
		}
		else
		{
			return(0);
		}
	}
	return(1);
}

/*int	main(void)
{
	printf("%i\n", ft_str_is_printable(" "));
}*/
