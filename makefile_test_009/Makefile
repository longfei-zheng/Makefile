
ROOT = /home/zhenglf/Documents/makefile_test/makefile_test
TAR += main.out

SUB_DIR = local_add_int_double local_add 

SRC = $(wildcard ./*.c)  
#OBJ = $(patsubst %.c, %.o, $(SRC))  
OBJ = $(SRC:%.c=%.o)
INC = $(patsubst %.c, %.h, $(SRC)) 

CFLAGS += -I.
CFLAGS += -I$(ROOT)/local_add
CFLAGS += -I$(ROOT)/local_add_int_double
export CFLAGS

LDFLAGS += -L./local_add/local_add_install/lib
LDFLAGS += -L./local_add_int_double/local_add_int_double_install/lib

LIBS += -llocal_add
LIBS += -ladd_double
LIBS += -ladd_int


# $(LIBS) is referenced by $(OBJ)
# $(OBJ) must be placed before $(LIBS)
# or error [main.c:(.text+0x1f): undefined reference to `add_int']
$(TAR):$(OBJ) install_sub
	gcc $(OBJ) $(LDFLAGS) $(LIBS)  -o $(TAR)


%.o:%.c
	gcc $(CFLAGS)  -c $< -o $@
	$(info [INFO]<: $< )
	$(info [INFO]@: $@ )
	$(info [INFO]CFLAGS: $(CFLAGS) )	


install_sub:
	for file in $(SUB_DIR); \
	do \
	make install -C $$file; \
	done 


clean:uninstall_sub
	rm -rf  ./main.out  $(OBJ) $(TAR)
	for file in $(SUB_DIR); \
	do \
	make clean -C $$file; \
	done 


uninstall_sub:
	for file in $(SUB_DIR); \
	do \
	make uninstall -C $$file; \
	done 
