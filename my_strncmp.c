/*
** my_strncmp.c for quit in /home/hengm/devC/Libmy/heng_m/libmy_finale
** 
** Made by HENG Morgane
** Login   <heng_m@etna-alternance.net>
** 
** Started on  Tue Nov 17 16:01:39 2015 HENG Morgane
** Last update Tue Nov 17 16:01:41 2015 HENG Morgane
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
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
