/*
** my_getnbr.c for quit in /home/hengm/devC/Libmy/heng_m/libmy_finale
** 
** Made by HENG Morgane
** Login   <heng_m@etna-alternance.net>
** 
** Started on  Tue Nov 17 16:02:39 2015 HENG Morgane
** Last update Tue Nov 17 16:02:40 2015 HENG Morgane
*/

int	my_getnbr(char *str)
{
  int	neg;
  int	number;

  neg = 0;
  number = 0;
  if ((*str < '0'&& *str != '+' && *str != '-') || *str > '9')
    return (0);
  else
    {
      while (*str == '+' || *str == '-')
	{
	  if (*str == '-')
	    neg = neg + 1;
	  str++;
	}
      while (*str >= '0' && *str <= '9')
	{
	  number = (number * 10) + (*str - 48);
	  str++;
	}
	if (neg % 2 == 0)
	  return (number);
	else
	  return (-number);
    }
}
