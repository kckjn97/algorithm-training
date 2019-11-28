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
	make check

cat:
	cat main.cpp

input:
	vi input.txt

answer:
	vi answer.txt

check:
	./bin < input.txt > result.txt
	diff result.txt answer.txt

edit:
	vim main.cpp
 
git:
	make clean
	git add .
	git commit -am $(notdir $(CURDIR))
	git push
	
clean :
	@rm -rf *.o bin result.txt
