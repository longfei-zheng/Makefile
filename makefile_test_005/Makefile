OBJ += main.o
OBJ += local_add.o
OBJ += local_add_int.o
OBJ += local_add_double.o

main.out:$(OBJ)
	gcc  $(OBJ)  -o main.out

%.o:%.c
	gcc -c $< -o $@
	$(info $< )

clean:
	rm -rf  ./main.out  $(OBJ)
