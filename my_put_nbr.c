/*
** my_put_nbr.c for quit in /home/hengm/devC/Libmy/heng_m/libmy_finale
** 
** Made by HENG Morgane
** Login   <heng_m@etna-alternance.net>
** 
** Started on  Tue Nov 17 16:02:54 2015 HENG Morgane
** Last update Tue Nov 17 16:12:00 2015 HENG Morgane
*/

void	my_putchar(char c);

int	my_nb_len(int n)
{
  int	digit;

  digit = 0;
  while (n != 0)
    {
      n = n / 10;
      digit = digit + 1;
    }
  return (digit);
}

void	my_aff_tab(int length, char number[length])
{
  int	j;

  j = 0;
  while (j < length)
    {
      my_putchar(number[j]);
      j = j + 1;
    }
}

int	my_subfunction(int *min, int n)
{
  if (n == -2147483648)
    {
      *min = n;
      n = n + 1;
    }
  if (n < 0)
    {
      my_putchar('-');
      n = -n;
    }
  if (n == 0)
    my_putchar(n + 48);
  return (n);  
}

void	my_put_nbr(int n)
{
  int	i;
  int	j;
  int	k;
  int	l;
  int	min;
  int	length = my_nb_len(n);
  char	number[length];

  min = 0;
  k =  my_nb_len(n);
  l = my_nb_len(n);
  n = my_subfunction(&min, n);
  i = n % 10;
  j = length - 1;
   while (k > 0)
    {
      number[j] = i + 48;
      n = n / 10;
      i = n % 10;
      k = k - 1;
      j = j - 1;
      }
  if (min == -2147483648)
    number[l - 1] = 8 + 48;
  my_aff_tab(length, number);
}
