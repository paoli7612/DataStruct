run: bin/main.out
	./bin/main.out

bin/main.out: bin/liste.o
	g++ main.cpp bin/liste.o -o bin/main.out

bin/liste.o:
	g++ src/liste.cpp -c -o bin/liste.o

clean:
	rm -rf bin/*