NAME	=	contact
CC		=	clang++
INCLUDES	=	includes
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98 -I$(INCLUDES)
RM			=	rm -rf
SRCS		=	Contact.cpp \
				main.cpp \
				PhoneBook.cpp\

all:	$(NAME)

$(NAME):
		$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

fclean:
		$(RM) $(NAME)

re: fclean all

.PHONY: fclean, all, re