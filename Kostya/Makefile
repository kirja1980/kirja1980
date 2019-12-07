all: main.o get_text.o errors.o print_text.o test.o sort_text.o
	gcc main.o get_text.o errors.o print_text.o test.o sort_text.o -o strt
main.o: main.c get_text.h errors.h print_text.h test.h sort_text.h
	gcc -c main.c
get_text.o: get_text.c get_text.h
	gcc -c get_text.c
errors.o: errors.c errors.h
	gcc -c errors.c
print_text.o: print_text.c print_text.h
	gcc -c print_text.c
test.o: test.c test.h
	gcc -c test.c
sort_text.o: sort_text.c sort_text.h
	gcc -c sort_text.c
clean:
	rm strt *.o
	



