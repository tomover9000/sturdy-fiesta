CC := g++
L_FLAGS := -lSDL2 -lSDL2main 

make: test.cpp 
	$(CC) test.cpp -o build/Application $(L_FLAGS)
clean:
	rm build/Application
