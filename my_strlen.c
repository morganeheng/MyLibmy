/*
** my_strlen.c for quit in /home/hengm/devC/Libmy/heng_m/libmy_finale
** 
** Made by HENG Morgane
** Login   <heng_m@etna-alternance.net>
** 
** Started on  Tue Nov 17 16:03:38 2015 HENG Morgane
** Last update Tue Nov 17 16:03:39 2015 HENG Morgane
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (*str != '\0')
    {
      i = i + 1;
      str++;
    }
  return (i);
}
