all: main assert

main: main.cpp
	g++ -g -o main main.cpp -lgtest_main -lgtest

assert: assert.cpp
	g++ -g -o assert assert.cpp -lgtest_main -lgtest

clean:
	rm main assert

test: main assert
	./main
	./assert
