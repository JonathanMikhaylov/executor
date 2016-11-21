make: executor.c
	gcc executor.c
clean:
	rm a.out
run: a.out
	./a.out
