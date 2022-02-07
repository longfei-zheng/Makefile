TAR = main.out
SRC = $(wildcard ./*.c)  
#OBJ = $(patsubst %.c, %.o, $(SRC))  
OBJ = $(SRC:%.c=%.o) 

$(TAR):$(OBJ)
	gcc  $^  -o  $@
	$(info [NOTE]^: $^ )
	$(info [NOTE]@: $@ )

%.o:%.c
	gcc -c $< -o $@
	$(info [INFO]<: $< )
	$(info [INFO]@: $@ )

clean:
	rm -rf  ./main.out  $(OBJ)
