CC      = G++
CFLAGS  = -W -Wall -O2 -std=c++14
LDFLAGS = -lm

all:
	make bin
	make check

bin : main.cpp
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

run :
	make bin
	./bin < input.txt

cat:
	cat main.cpp

check:
	./bin < input.txt > result.txt
	diff result.txt answer.txt

edit:
	vim main.cpp
 
clean :
	@rm -rf *.o bin result.txt
