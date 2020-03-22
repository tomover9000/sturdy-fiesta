CC := g++
$L_FLAGS := -lSDL2 -lSDL2main 

test.o: test.cpp
	$(CC) test.cpp -c test.o

test: test.cpp 
	$(CC) test.cpp -o test $(L_FLAGS)
clean:
	rm *.o
