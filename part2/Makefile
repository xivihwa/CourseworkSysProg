CC = gcc
CFLAGS = -Wall -g
OBJ = calc.o main.o
TARGET = calculator.exe

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	del $(OBJ) $(TARGET)
