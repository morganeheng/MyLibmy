/*
** my_strdup.c for quit in /home/hengm/devC/Libmy/heng_m/libmy_finale
** 
** Made by HENG Morgane
** Login   <heng_m@etna-alternance.net>
** 
** Started on  Tue Nov 17 16:01:22 2015 HENG Morgane
** Last update Tue Nov 17 16:01:24 2015 HENG Morgane
*/

#include <stdlib.h>

int	my_strlen(char *str);
char	*my_strcpy(char *dest, char *src);

char	*my_strdup(char *str)
{
  char	*str2;
  int	length;

  length = my_strlen(str);
  str2 = malloc((length + 1) * sizeof(*str2));
  return (my_strcpy(str2, str));
}
