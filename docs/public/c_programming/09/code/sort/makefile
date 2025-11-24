example:test_example
	@./test_example

rand:test_rand
	@./test_rand 50000

test_example.o:test_example.c
	gcc -c $< -o $@

test_rand.o:test_rand.c
	gcc -c $< -o $@

rand.o:rand.c
	gcc -c $< -o $@

test_example:test_example.o sort.o
	gcc $^ -o $@

test_rand:test_rand.o sort.o
	gcc $^ -o $@

.PHONY:clean
clean:
	-rm *.o test_example test_rand