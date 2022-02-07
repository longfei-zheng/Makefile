Install_Path = ./local_add_install

TAR += liblocal_add.a

SRC = $(wildcard ./*.c)  
#OBJ = $(patsubst %.c, %.o, $(SRC))  
OBJ = $(SRC:%.c=%.o)
INC = $(patsubst %.c, %.h, $(SRC)) 


$(TAR):$(OBJ)
	ar -r  liblocal_add.a  local_add.o

%.o:%.c
	gcc $(CFLAGS) -c $< -o $@
	$(info [INFO]<: $< )
	$(info [INFO]@: $@ )
	$(info [INFO]CFLAGS: $(CFLAGS) )



install:$(TAR)
	install -d $(Install_Path)/lib
	install -d $(Install_Path)/include
	install -m 0755 $(TAR)  $(Install_Path)/lib
	install -m 0755 $(INC)  $(Install_Path)/include

uninstall:
	rm -rf $(Install_Path)


clean:
	rm -rf  ./main.out  $(OBJ) $(TAR)
    
