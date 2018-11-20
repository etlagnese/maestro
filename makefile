CC=g++
CFLAGS=-Wno-narrowing -Wno-write-strings

make: main.cpp
	$(CC) main.cpp maestro.cpp -o maestro $(CFLAGS)
