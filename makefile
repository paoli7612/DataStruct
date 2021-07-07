
run:
	g++ src/list.cc -c -o bin/list.o
	g++ src/tree.cc -c -o bin/tree.o
	g++ src/tree.cc -c -o bin/queue.o
	g++ src/tree.cc -c -o bin/graph.o
	g++ src/main.cc bin/*.o -o bin/main.out
	./bin/main.out
	rm -rf bin/*.o*