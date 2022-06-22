/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/20 14:07:46 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/06/21 21:52:59 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return(str);
}

/*int	main(void)
{
	char	str[] = "JE9tr";
	printf("ft: %s\n", ft_strupcase(str));
}*/
