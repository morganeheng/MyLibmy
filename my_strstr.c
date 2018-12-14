/*
** my_strstr.c for quit in /home/hengm/devC/Libmy/heng_m/libmy_finale
** 
** Made by HENG Morgane
** Login   <heng_m@etna-alternance.net>
** 
** Started on  Tue Nov 17 16:05:33 2015 HENG Morgane
** Last update Tue Nov 17 16:05:35 2015 HENG Morgane
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      if (to_find[j] == '\0')
	return (str + (i - j));
      if (str[i] != to_find[j])
	i++;
      else
	{
	  i++;
	  j++;
	}
    }
  if (str[i] == '\0' && to_find[j] == '\0')
    return (str + (i - j));
  return ("null");
}
