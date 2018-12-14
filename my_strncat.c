/*
** my_strncat.c for quit in /home/hengm/devC/Libmy/heng_m/libmy_finale
** 
** Made by HENG Morgane
** Login   <heng_m@etna-alternance.net>
** 
** Started on  Tue Nov 17 16:05:17 2015 HENG Morgane
** Last update Tue Nov 17 16:05:19 2015 HENG Morgane
*/

int	my_strlen(char *str);

char	*my_strncat(char *str1, char *str2, int n)
{
  int	i;
  int	length;
  int	j;

  length = my_strlen(str1);
  i = length;
  j = 0;
  while (j < n)
    {
      str1[i] = str2[j];
      i = i + 1;
      j = j + 1;
    }
  str1[i] = '\0';
  return (str1);
}
