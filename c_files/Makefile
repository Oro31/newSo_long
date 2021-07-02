LIBMLX = ./../minilibx-linux/libmlx_Linux.a

CFLAGS = -Wall -Wextra -Werror -g3

LDFLAGS = -lXext -lX11 -lm -lbsd

EXEC = so_long

SRC =	$(wildcard *.c)
#deplacer.c	/
#		draw.c	/
#		ft_check_map.c	/
#		ft_error.c	/
#		ft_free.c	/
#		ft_init.c	/
#		ft_itoa.c	/
#		ft_key_hook.c	/
#		ft_putstr.c	/
#		get_next_line.c	/
#		get_next_line_utils.c	/
#		image.c	/
#		load_xpmfiles.c	/
#		main.c	/
#		monde.c	/
#		parse_map.c	/

OBJ =	$(subst .c,.o,$(SRC))

all :	$(EXEC)

$(EXEC) :
#	$(MAKE) -C ./../minilibx-linux $(LDFLAGS)
#	cp $(LIBMLX) $@
	gcc $(CFLAGS) -c $(SRC)
	gcc -o $@ $(OBJ) $(LIBMLX) $(LDFLAGS)

clean :
#	$(MAKE) clean -C ./../minilibx-linux $(LDFLAGS)
	/bin/rm -f $(OBJ)

fclean : clean
#	$(MAKE) fclean -C ./../minilib-linux $(LDFLAGS)
	/bin/rm -f $(EXEC)

re : fclean all

.PHONY : clean fclean all re
