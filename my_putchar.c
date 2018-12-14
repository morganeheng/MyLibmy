/*
** my_putchar.c for quit in /home/hengm/devC/Libmy/heng_m/libmy_finale
** 
** Made by HENG Morgane
** Login   <heng_m@etna-alternance.net>
** 
** Started on  Tue Nov 17 16:00:41 2015 HENG Morgane
** Last update Tue Nov 17 16:00:44 2015 HENG Morgane
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
