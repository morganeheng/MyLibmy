/*
** my_str_to_wordtab.c for quit in /home/hengm/devC/Libmy/heng_m/libmy_finale
** 
** Made by HENG Morgane
** Login   <heng_m@etna-alternance.net>
** 
** Started on  Tue Nov 17 16:01:55 2015 HENG Morgane
** Last update Tue Nov 17 16:01:58 2015 HENG Morgane
*/

#include <stdlib.h>

int	my_strlen(char *str);
char	*my_strncpy(char *dest, char *src, int n);

int	check_alphanum(char *str, int j)
{
  if ((str[j] >= 'A' && str[j] <= 'Z') ||
      (str[j] >= 'a' && str[j] <= 'z') ||
      (str[j] >= '0' && str[j] <= '9'))
    return (1);
  return (0);
}

void	init_count(int *i, int *j, int *word)
{
  *j = 0;
  *i = 0;
  *word = 0;
}

int	get_nb_word(char *str)
{
  int   word;
  int   i;
  int   j;
  int	length;

  init_count(&i, &j, &word);
  length = my_strlen(str);
  while (i < length)
    {
      while (check_alphanum(str, i) == 0 && i < length)
	i = i + 1;
      while (check_alphanum(str, i) == 1 && i < length)
	i = i + 1;
      if (i <= length && check_alphanum(str, i - 1) == 1)
	word = word + 1;
    }
  return (word);
}

char	*my_subfunctiontwo(int *i, int j, char *str, int *word)
{
  char	*dest;

  *word = *word + 1;
  dest = malloc((*i - j + 1) * sizeof(char));
  my_strncpy(dest, str + j, *i - j);
  *i = *i + 1;
  return (dest);
}

char	**my_str_to_wordtab(char *str)
{
  int   word;
  int   i;
  int   j;
  char	**tab;

  tab = malloc(get_nb_word(str) * sizeof(char *));
  init_count(&i, &j, &word);
  while (i < my_strlen(str))
    {
      while (check_alphanum(str, i) == 0 && i < my_strlen(str))
	{
	  i = i + 1;
	  j = j + 1;
	}
      while (check_alphanum(str, i) == 1 && i < my_strlen(str))
	  i = i + 1;
      if (i <= my_strlen(str) && check_alphanum(str, i - 1) == 1)
	{
	  tab[word] = malloc((i - j + 1) * sizeof(char));
	  tab[word] = my_subfunctiontwo(&i, j, str, &word);
	}
      j = i;
    }
  tab[word] = '\0';
  return (tab);
}
