##
## Makefile for quit in /home/hengm/devC/Libmy/heng_m/libmy_finale
## 
## Made by HENG Morgane
## Login   <heng_m@etna-alternance.net>
## 
## Started on  Tue Nov 17 16:00:23 2015 HENG Morgane
## Last update Tue Nov 17 16:07:22 2015 HENG Morgane
##

CC =	gcc

SRC =	my_putchar.c \
	my_isneg.c \
	my_put_nbr.c \
	my_swap.c \
	my_putstr.c \
	my_strlen.c \
	my_getnbr.c \
	my_strcpy.c \
	my_strncpy.c \
	my_strcmp.c \
	my_strncmp.c \
	my_strcat.c \
	my_strncat.c \
	my_strstr.c \
	my_strdup.c \
	my_str_to_wordtab.c

OBJ =	$(SRC:%.c=%.o)

AR =	ar r

RA =	ranlib

LIB =	libmy.a

RM =	rm -f

librairie:		$(OBJ)
		$(AR) $(LIB) $(OBJ)
		$(RA) $(LIB)

all:		librairie

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(LIB)
