CC = gcc
TARGET = main
CFLAGS = -W -Wall
OBJECTS = main.o manager.o product.o
all: $(TARGET)
$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^
clean:
	rm *.o shop






