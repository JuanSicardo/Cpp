CC=g++

all: $(patsubst %.cpp,%.exe,$(wildcard *.cpp))

%.exe: %.cpp
	$(CC) $< -o $@

$@: $@.exe

.PHONY: clean

clean:
	rm -f *.exe