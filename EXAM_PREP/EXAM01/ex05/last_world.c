/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_world.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 03:45:13 by achahrou          #+#    #+#             */
/*   Updated: 2023/08/25 10:35:16 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void last_word(char *str)
{
    int i = 0;
    
    // Cette boucle while déplace l'indice i jusqu'à la fin de la chaîne
    while (str[i] != 0)
        i++;
    
    i--; // Décrémente i pour qu'il pointe sur le dernier caractère de la chaîne
    
    // Cette boucle while déplace i vers la gauche jusqu'à ce qu'il ne pointe plus
    // sur un espace ou une tabulation
    while (str[i] == 32 || str[i] == '\t')
        i--;
    
    // Maintenant, i pointe sur le dernier caractère non vide avant le dernier mot
    
    // Cette boucle while déplace i vers la gauche jusqu'à ce qu'il pointe sur un espace
    // ou une tabulation, ce qui marque le début du dernier mot
    while (i > 0)
    {
        if (str[i] == 32 || str[i] == '\t')
            break;
        i--;
    }
    i++;
    // Incrémente i pour pointer sur le premier caractère du dernier mot
    
    // Cette boucle while écrit chaque caractère du dernier mot sur la sortie standard (stdout)
    while (str[i] != '\0' && str[i] != '\t' && str[i] != 32)
    {
        write(1, &str[i] , 1);
        i++;
    }
}
int main (int argc, char **argv)
{
	if (argc == 2)
		last_world(argv[1]);
	write(1,"\n",1);
}
