# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: wbarendr <wbarendr@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/31 10:17:03 by wbarendr       #+#    #+#                 #
#    Updated: 2019/11/13 12:54:34 by wbarendr      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_atoi ft_calloc ft_isalpha ft_isdigit ft_itoa \
		ft_memchr ft_memcpy ft_memset ft_strchr ft_strjoin \
		ft_strlcpy ft_strncmp ft_strrchr ft_substr ft_toupper \
		ft_bzero ft_isalnum ft_isascii ft_isprint ft_memccpy \
		ft_memcmp ft_memmove ft_split ft_strdup ft_strlcat \
		ft_strlen ft_strnstr ft_strtrim ft_tolower ft_strmapi \
		ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd \

BONUS = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back \
		ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

CFILES	= $(SRCS:%=%.c)
OFILES	= $(SRCS:%=%.o)
CBONUS	= $(BONUS:%=%_bonus.c)
OBONUS	= $(BONUS:%=%_bonus.o)

INCLUDES = libft.h

all:	$(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra $(CFILES) -c
	ar rc $(NAME) $(OFILES)

bonus:
	gcc -Wall -Werror -Wextra $(CBONUS) -c
	ar rc $(NAME) $(OBONUS)
	touch bonus

clean:
	rm -f $(OFILES) $(OBONUS)
	rm -f bonus

fclean:		clean
	rm -f $(NAME)

re:	fclean all
