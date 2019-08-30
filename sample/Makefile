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
	./bin < input1.txt

cat:
	cat main.cpp

check:
	./bin < input1.txt > result1.txt
	diff result1.txt answer1.txt

edit:
	vim main.cpp
 
clean :
	@rm -rf *.o bin result*.txt
