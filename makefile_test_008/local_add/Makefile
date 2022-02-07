Install_Path = ./local_add_install

TAR += liblocal_add.a

SRC = $(wildcard ./*.c)  
#OBJ = $(patsubst %.c, %.o, $(SRC))  
OBJ = $(SRC:%.c=%.o)
INC = $(patsubst %.c, %.h, $(SRC)) 

CFLAGS = -I. -I../local_add_int_double/local_add_int_double_install/include
LDFLAGS = -L../local_add_int_double/local_add_int_double_install/lib
LIBS = -ladd_int -ladd_double

$(TAR):$(OBJ)
	ar -r  liblocal_add.a  local_add.o

%.o:%.c
	gcc $(CFLAGS) -c $< -o $@
	$(info [INFO]<: $< )
	$(info [INFO]@: $@ )


install:$(TAR)
	install -d $(Install_Path)/lib
	install -d $(Install_Path)/include
	install -m 0755 $(TAR)  $(Install_Path)/lib
	install -m 0755 $(INC)  $(Install_Path)/include

uninstall:
	rm -rf $(Install_Path)


clean:
	rm -rf  ./main.out  $(OBJ) $(TAR)
    
