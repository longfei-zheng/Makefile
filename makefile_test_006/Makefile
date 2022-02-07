TAR = main.out
SRC = $(wildcard ./*.c)  
#OBJ = $(patsubst %.c, %.o, $(SRC))  
OBJ = $(SRC:%.c=%.o) 

$(TAR):$(OBJ)
	gcc  $(OBJ)  -o $(TAR)

%.o:%.c
	gcc -c $< -o $@
	$(info $< )

clean:
	rm -rf  ./main.out  $(OBJ)
