CC := g++
L_FLAGS := -lSDL2 -lSDL2main 

make: *.cpp headers/*.h
	$(CC) *.cpp headers/*.h -o build/Application $(L_FLAGS)
clean:
	rm build/Application
