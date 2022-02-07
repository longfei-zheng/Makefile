FILES += add_int
FILES += add_double

Install_Path = ./local_add_int_double_install

TAR += libadd_int.a
TAR += libadd_double.a

SRC = $(wildcard ./*.c)  
#OBJ = $(patsubst %.c, %.o, $(SRC))  
OBJ = $(SRC:%.c=%.o)
INC = $(patsubst %.c, %.h, $(SRC)) 


$(TAR):$(OBJ)
	for FILE in $(FILES); \
	do \
	ar -r lib"$$FILE".a  local_"$$FILE".o; \
	$(info [INFO] target: target ) \
	done

%.o:%.c
	gcc -c $< -o $@
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
    
