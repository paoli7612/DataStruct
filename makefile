SRC=src/*.cc
OBJ=bin/*.o
OUTFILE=bin/main.out
INCLUDE=include/
DEPENDENCIES=bin/deps

CXXFLAGS += -I$(INCLUDE)
CXXFLAGS += -o $(OUTFILE)

_main: depend build link
depend:
	g++ -MM $(SRC) > $(DEPENDENCIES)
	
build: $(SRC)
	g++ -c $^
	mv *.o bin/

link: $(OBJ)
	g++ $(CXXFLAGS) $^

run: _main
	./$(OUTFILE)

-include $(DEPENDENCIES)

.PHONY: clean cleanall
clean:
	rm bin/*.o
cleanall: clean
	rm bin/