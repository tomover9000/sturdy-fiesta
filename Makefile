CC := g++
L_FLAGS := -lSDL2 -lSDL2main 
HEADER = headers/*.h
CFLAGS = -c -Iinclude

make: test.cpp $(HEADER)
	$(CC) $(CFLAGS) Application.cpp -o build/Application $(L_FLAGS)
clean:
	rm build/Application
