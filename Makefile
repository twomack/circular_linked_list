HEADERS = circular_linked_list.h

default: circular_linked_list

circular_linked_list.o: circular_linked_list.c $(HEADERS)
	gcc -c circular_linked_list.c -o circular_linked_list.o

circular_linked_list: circular_linked_list.o
	gcc circular_linked_list.o -o circular_linked_list

clean:
	-rm -f circular_linked_list.o
	-rm -f circular_linked_list
