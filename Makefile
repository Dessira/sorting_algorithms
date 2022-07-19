betty: *.c
	betty *.c

compile: *.c
	gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 *.c -o sort