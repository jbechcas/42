*Este proyecto ha sido creado como parte del currículo de 42 por jbech-ca.*

# Libft - Tu primera librería en C

## Descripción
**Libft** es el primer proyecto del currículo de 42. Su objetivo principal es comprender el funcionamiento interno de las funciones estándar más utilizadas en C, recreándolas desde cero junto con otras utilidades adicionales de manejo de memoria, cadenas y listas enlazadas. El resultado es una librería estática (`libft.a`) propia que servirá como base y herramienta para futuros proyectos en C dentro del cursus.

## Descripción detallada de la librería
La parte obligatoria de la librería se divide en tres bloques principales de funciones:

### Parte 1 - Funciones de libc
Reimplementación de funciones estándar de la librería de C con el mismo prototipo y comportamiento que las originales, precedidas por el prefijo `ft_`:
* **Clasificación y conversión de caracteres:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.
* **Manipulación de cadenas (strings):** `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`.
* **Manipulación de memoria:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`.
* **Conversión y reserva dinámica (`malloc`):** `ft_atoi`, `ft_calloc`, `ft_strdup`.

### Parte 2 - Funciones adicionales
Funciones que no forman parte de la `libc` estándar o que presentan una implementación adaptada para facilitar el manejo de cadenas y descriptores de archivo:
* `ft_substr`: Extrae una subcadena de una cadena original reservando memoria con `malloc`.
* `ft_strjoin`: Concatena dos cadenas en una nueva cadena reservada en memoria.
* `ft_strtrim`: Elimina los caracteres especificados en un conjunto (`set`) al principio y al final de una cadena.
* `ft_split`: Divide una cadena en un array de subcadenas terminado en `NULL` utilizando un carácter delimitador.
* `ft_itoa`: Convierte un número entero (`int`) en una cadena de caracteres.
* `ft_strmapi`: Aplica una función a cada carácter de una cadena generando una nueva cadena con el resultado.
* `ft_striteri`: Aplica una función a cada carácter de una cadena permitiendo su modificación directa mediante su dirección.
* **Funciones de escritura por descriptor de archivo (`fd`):** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

### Parte 3 - Listas enlazadas
Funciones orientadas a la creación y manipulación de listas enlazadas simples mediante la estructura `t_list`:
* `ft_lstnew`: Crea un nuevo nodo inicializando su contenido.
* `ft_lstadd_front` / `ft_lstadd_back`: Añaden un nodo al principio o al final de la lista.
* `ft_lstsize`: Cuenta el número total de nodos de una lista.
* `ft_lstlast`: Devuelve un puntero al último nodo de la lista.
* `ft_lstdelone` / `ft_lstclear`: Liberan la memoria de un nodo único o de toda la lista sucesivamente.
* `ft_lstiter`: Itera sobre la lista aplicando una función al contenido de cada nodo.
* `ft_lstmap`: Itera sobre una lista aplicando una función y generando una nueva lista con los resultados.

## Instrucciones

### Compilación
El proyecto cuenta con un `Makefile` que compila el código utilizando el compilador `cc` con los flags `-Wall -Wextra -Werror` y empaqueta los objetos con `ar`.

* Compilar la librería (`libft.a`):
  ```bash
  make
  ```
* Eliminar los archivos objeto (`.o`) generados:
  ```bash
  make clean
  ```
* Eliminar los archivos objeto (`.o`) y la librería (`libft.a`):
  ```bash
  make fclean
  ```
* Recompilar todo el proyecto desde cero:
  ```bash
  make re
  ```

### Uso en un proyecto
Para utilizar la librería en tu código, incluye la cabecera en tus archivos `.c`:
```c
#include "libft.h"
```
Y compila tu programa enlazando el archivo `libft.a`:
```bash
cc -Wall -Wextra -Werror main.c libft.a -o mi_programa
```

## Recursos

### Referencias y documentación
* **Páginas del manual de Linux (`man`):** Consultadas para verificar el comportamiento exacto, valores de retorno y casos límite de las funciones de `libc` y `<bsd/string.h>`.
* **Documentación de la Norma de 42:** Guía de estilo y restricciones de formato de código del campus.
* **GNU C Library Documentation:** Referencia sobre gestión de memoria y punteros en C.

### Uso de Inteligencia Artificial
* **Gemini:** Utilizado como apoyo para resolver dudas puntuales de lógica y gestión de memoria en funciones complejas (como `ft_split`, en lo relativo al conteo de palabras y la liberación de memoria en caso de fallo de `malloc`), así como para dar formato a este archivo `README.md`. Todo el código en C del proyecto ha sido escrito y probado de forma manual.