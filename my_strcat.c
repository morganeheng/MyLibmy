/*
** my_strcat.c for quit in /home/hengm/devC/Libmy/heng_m/libmy_finale
** 
** Made by HENG Morgane
** Login   <heng_m@etna-alternance.net>
** 
** Started on  Tue Nov 17 16:01:01 2015 HENG Morgane
** Last update Tue Nov 17 16:01:04 2015 HENG Morgane
*/

int	my_strlen(char *str);

char	*my_strcat(char *str1, char *str2)
{
  int	i;
  int	length;

  length = my_strlen(str1);
  i = length;
  while (*str2 != '\0')
    {
      str1[i] = *str2;
      i = i + 1;
      str2++;
    }
  str1[i] = '\0';
  return (str1);
}
