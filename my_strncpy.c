/*
** my_strncpy.c for quit in /home/hengm/devC/Libmy/heng_m/libmy_finale
** 
** Made by HENG Morgane
** Login   <heng_m@etna-alternance.net>
** 
** Started on  Tue Nov 17 16:03:53 2015 HENG Morgane
** Last update Tue Nov 17 16:13:10 2015 HENG Morgane
*/

int	my_strlen(char *str);

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  if (my_strlen(src) < n)
    {
      i = 0;
      while (i < my_strlen(src))
	{
	  dest[i] = src[i];
	  i = i + 1;
	}
      i = my_strlen(src);
      while (i < n)
	{
	  dest[i] = '\0';
	  i = i + 1;
	}
    }
    i = 0;
      while (i < n)
	{
	  dest[i] = src[i];
	  i = i + 1;
	}
  return (dest);
}
