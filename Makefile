all:
	g++ -c ./cpp_files/signal_handler.cpp
	g++ -c ./cpp_files/process.cpp
	g++ -c ./cpp_files/process_manager.cpp
	g++ -c ./cpp_files/parser.cpp
	g++ -g -Wall ./cpp_files/main.cpp *.o -o main

clean:
	rm main *.o