/*
** my_strcpy.c for quit in /home/hengm/devC/Libmy/heng_m/libmy_finale
** 
** Made by HENG Morgane
** Login   <heng_m@etna-alternance.net>
** 
** Started on  Tue Nov 17 16:05:03 2015 HENG Morgane
** Last update Tue Nov 17 16:05:06 2015 HENG Morgane
*/

int	my_strlen(char *str);

char	*my_strcpy(char *dest, char *src)
{
  int	length;
  int	i;

  length = my_strlen(src);
  i = 0;
  while (i < length)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
