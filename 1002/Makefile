CC      = G++
CFLAGS  = -W -Wall -O2 -std=c++14
LDFLAGS = -lm

bin : main.cpp
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

check:
	./bin < input1.txt > result1.txt
	diff result1.txt answer1.txt
 
clean :
	@rm -rf *.o bin result*.txt
