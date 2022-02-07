TAR += main.out

SRC = $(wildcard ./*.c)  
#OBJ = $(patsubst %.c, %.o, $(SRC))  
OBJ = $(SRC:%.c=%.o)
INC = $(patsubst %.c, %.h, $(SRC)) 

CFLAGS += -I.
CFLAGS += -I./local_add/local_add_install/include
CFLAGS += -I./local_add_int_double/local_add_int_double_install/include

LDFLAGS += -L./local_add/local_add_install/lib
LDFLAGS += -L./local_add_int_double/local_add_int_double_install/lib

LIBS += -llocal_add
LIBS += -ladd_double
LIBS += -ladd_int

# $(LIBS) is referenced by $(OBJ)
# $(OBJ) must be placed before $(LIBS)
# or error [main.c:(.text+0x1f): undefined reference to `add_int']
$(TAR):$(OBJ)
	gcc $(OBJ) $(LDFLAGS) $(LIBS)  -o $(TAR)

%.o:%.c
	gcc $(CFLAGS)  -c $< -o $@
	$(info [INFO]<: $< )
	$(info [INFO]@: $@ )

clean:
	rm -rf  ./main.out  $(OBJ) $(TAR)
    
