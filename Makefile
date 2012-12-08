all: main

main:
	g++ -g -o main main.cpp -lgtest_main -lgtest

clean:
	rm main

test:
	./main
