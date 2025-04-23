/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:38:33 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/23 22:57:29 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;

    if (!s1 || !s2)
        return (NULL);
    while (*s1)
    {
        i = 0;
        while (s2[i])
        {
            if (*s1 == s2[i])
                return ((char *)s1);
            i++;
        }
        s1++;
    }
    return (NULL);
}

// Elle parcourt la chaîne s1
// À chaque caractère, elle vérifie s’il correspond à un des caractères présents 
// dans s2.
// Dès qu’un caractère commun est trouvé, un pointeur vers ce caractère 
// dans s1 est retourné.
// Si aucun des caractères de s2 n’est trouvé ds s1, la fonction retourne NULL.

#include <stdio.h>

int main()
{
    char str[] = "hello world";
    char accept[] = "zx";
    
    char *res = ft_strpbrk(str, accept);
    if (res)
        printf("Premier caractère trouvé : %c\n", *res);
    else
        printf("Aucun caractère trouvé.\n");
    return 0;
}
