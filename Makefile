all: 
	g++ -c ./cpp_files/parser.cpp
	g++ -g -Wall ./cpp_files/main.cpp parser.o -o main

clean:
	rm main parser.o