all: main

main: main.cpp
	g++ -g -o main main.cpp -lgtest_main -lgtest

clean:
	rm main

test:
	./main
