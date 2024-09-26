LIB = ar rcs // creación de librería estática, 'ar' crea, modifica y extrae los archivos de la misma (.a), 'r' replace, 'ar' remplaza versiones antiguas, 'c' create para crear si el archivo no existe, 's' le indica a 'ar' que cree un índice para que el enlazador pueda encontrar las funciones en la libreria
NAME = libft.a

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJ = $(SRC:%.c=%.o) // varible para convertir los .c en .o
INCLUDE = libft.h // archivos de cabecera

$(NAME) : $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ) // crea el ejecutable

all : $(NAME)

%.o : %.c
	@$(CC) $(CCFLAGS) -c -o $@ $< // indicadores, '@' suprimir la visualización del comando completo en terminal, '$@ $<' variables automaticas hacen referencia a los archivos .o .c así no es necesario escribir los nombres de los archivos .o y .c al compilar ex. gcc -c -o $@ $<

clean:
	@$(RM) $(OBJ)  // elimina archivos intermedios '.o'
fclean: clean //elimina además el ejecutable 
	@rm -f $(NAME) //elimina el archivo final compilado
re: fclean //limpiar y recompila todo desde cero 

.PHONY: all clean fclean re //ejecutar las reglas even if no existen en el directorio, 'objetivos falsos'
