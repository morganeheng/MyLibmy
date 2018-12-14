/*
** my_strcmp.c for quit in /home/hengm/devC/Libmy/heng_m/libmy_finale
** 
** Made by HENG Morgane
** Login   <heng_m@etna-alternance.net>
** 
** Started on  Tue Nov 17 16:03:11 2015 HENG Morgane
** Last update Tue Nov 17 16:03:13 2015 HENG Morgane
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != '\0' || s2[i] != '\0')
    {
      if (s1[i] < s2[i])
	return (-1);
      else if (s1[i] > s2[i])
	return (1);
      else if (s1[i] == s2[i])
	i = i + 1;
    }
  return (0);
}
