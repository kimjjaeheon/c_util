TARGET = c_util.a

CFLAGS = -g
CC = gcc
SOURCES = alloc_wrapper.c 
HEADERS = alloc_wrapper.h 

all: $(TARGET)

$(TARGET) : $(SOURCES) $(OBJECTS)
	$(CC) $(CFLAGS) -c $(SOURCES)
	ar rcs $(TARGET) $(SOURCES:.c=.o)

clean :
	rm -f $(TARGET) $(SOURCES:.c=.o)

