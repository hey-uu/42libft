# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/07 11:46:51 by hyeyukim          #+#    #+#              #
#    Updated: 2022/07/14 20:56:25 by hyeyukim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror 
AR = ar
ARFLAGS = crs
RM = rm
RMFLAGS = -rf

FILES = ft_atoi \
		ft_bzero \
		ft_calloc \
		ft_isalnum \
		ft_isalpha \
		ft_isascii \
		ft_isdigit \
		ft_isprint \
		ft_memchr \
		ft_memcmp \
		ft_memcpy \
		ft_memmove \
		ft_memset \
		ft_strchr \
		ft_strdup \
		ft_strlcat \
		ft_strlcpy \
		ft_strlen \
		ft_strncmp \
		ft_strnstr \
		ft_strrchr \
		ft_tolower \
		ft_toupper \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_striteri \
		ft_putchar \
		ft_putstr
		# ft_lstadd_back \
		# ft_lstadd_front \
		# ft_lstclear \
		# ft_lstdelone \
		# ft_lstiter \
		# ft_lstnew \
		# ft_lstsize

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJCS_DIR = ./
OBJCS = $(addprefix $(OBJCS_DIR), $(addsuffix .o,$(FILES)))

INC = ./

$(NAME) : $(OBJCS)
	$(AR) $(ARFLAGS) $@ $^

%.o : %.c
	$(CC) -c $(CFLAGS) -I$(INC) $< -o $@

all : $(NAME)

clean :
	$(RM) $(RMFLAGS) $(OBJCS)

fclean : clean
	$(RM) $(RMFLAGS) $(NAME)

re : 
	make fclean 
	make all

.PHONY : all clean fclean re
