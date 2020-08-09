CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = rush-01
OBJECTS = main.o input.o memory.o map.o solve.o condition_check.o

$(TARGET) : main.o input.o memory.o map.o solve.o condition_check.o
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

main.o : main.c
	$(CC) $(CFLAGS) -c $^

input.o : input.c
	$(CC) $(CFLAGS) -c $^

memory.o : memory.c
	$(CC) $(CFLAGS) -c $^

map.o : map.c
	$(CC) $(CFLAGS) -c $^

solve.o : solve.c
	$(CC) $(CFLAGS) -c $^

condicondition_check.o :condition_check.c
	$(CC) $(CFLAGS) -c $^

clean :
	rm *.o $(TARGET)
