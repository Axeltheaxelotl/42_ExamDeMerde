/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:43:08 by alanty            #+#    #+#             */
/*   Updated: 2024/04/09 17:21:22 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
    int i = -1;

    // Correction : changer le type de retour en char *
    // Utiliser une boucle while pour copier les caractères de s2 dans s1
    while (++i < n && s2[i])
        s1[i] = s2[i];
    s1[i] = '\0';
    return s1;
}

char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int wc = 0;

    // Compter le nombre de mots
    while (str[i] != '\0')
    {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        if (str[i] != '\0')
            wc++;
        while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
            i++;
    }

    // Allouer de la mémoire pour le tableau de pointeurs
    char **out = (char **)malloc(sizeof(char *) * (wc + 1));
    if (!out)
        return NULL;

    // Réinitialiser i pour diviser la chaîne en mots
    i = 0;
    while (str[i] != '\0')
    {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        j = i;
        while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
            i++;
        if (i > j)
        {
            out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
            if (!out[k])
                return NULL;
            ft_strncpy(out[k], &str[j], i - j);

            // Correction : Supprimer la double incrémentation de k
            k++;
        }
    }

    // Correction : Assigner NULL à la dernière position de out
    out[k] = NULL;
    return out;
}

