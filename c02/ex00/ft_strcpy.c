/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/19 12:59:22 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/06/21 21:37:31 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	*src = "Halloo";
	char	dest[30];

	ft_strcpy(dest, src);
	printf("ft:  %s\n", dest);
	strcpy(dest, src);
	printf("real:  %s", dest);
}*/
