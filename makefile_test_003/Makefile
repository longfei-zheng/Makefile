main.out:main.o local_add_int.o local_add.o
	gcc  local_add.o main.o local_add_int.o   -o main.out  # no order limit among local_add.o, main.o and local_add_int.o

main.o:main.c
	gcc -c main.c -o main.o

local_add.o:local_add.c
	gcc -c local_add.c -o local_add.o

local_add_int.o:local_add_int.c
	gcc -c local_add_int.c -o local_add_int.o

clean:
	rm -rf ./main.o ./main.out local_add.o local_add_int.o
