/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/19 14:00:46 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/06/21 21:31:57 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	str1[10] = "hoihoi";
	char	str2[10];
	
	ft_strncpy(str2, str1, 3);
	printf("ft: %s\n", str2);
	strncpy(str2, str1, 3);
	printf("real: %s", str2);
}*/
