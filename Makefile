# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bassouev <bassouev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/13 16:18:48 by bassouev          #+#    #+#              #
#    Updated: 2022/02/20 20:52:34 by bassouev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRCS = ft_strlen.c\
 	ft_atoi.c\
	ft_isascii.c\
	ft_memcmp.c\
	ft_putendl_fd.c\
	ft_strdup.c\
	ft_strtrim.c\
	ft_bzero.c\
	ft_isdigit.c\
	ft_memcpy.c\
	ft_putnbr_fd.c\
	ft_striteri.c\
	ft_strmapi.c\
	ft_substr.c\
	ft_calloc.c\
	ft_isprint.c\
	ft_memmove.c\
	ft_putstr_fd.c\
	ft_strjoin.c\
	ft_strncmp.c\
	ft_tolower.c\
	ft_isalnum.c\
	ft_itoa.c\
	ft_memset.c\
	ft_split.c\
	ft_strlcat.c\
	ft_strnstr.c\
	ft_toupper.c\
	ft_isalpha.c\
	ft_memchr.c\
	ft_putchar_fd.c\
	ft_strchr.c\
	ft_strlcpy.c\
	ft_strrchr.c

BONUS = ft_lstnew_bonus.c\
	ft_lstadd_front_bonus.c\
	ft_lstsize_bonus.c\
	ft_lstlast_bonus.c\
	ft_lstadd_back_bonus.c\
	ft_lstdelone_bonus.c\
	ft_lstclear_bonus.c\
	ft_lstiter_bonus.c\
	ft_lstmap_bonus.c
	
OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}
	
make bonus: $(NAME) $(OBJS_BONUS)
	
.c.o:
	$(CC) ${CFLAGS} -c $< -o ${<:.c=.o}
	

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME) $(OBJS_BONUS)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)
