main.out:main.o ref_add_int.o
	gcc main.o ref_add_int.o  -o main.out

main.o:main.c
	gcc -c main.c -o main.o

ref_add_int.o:ref_add_int.c
	gcc -c ref_add_int.c -o ref_add_int.o

clean:
	rm -rf ./main.o ./main.out ref_add_int.o