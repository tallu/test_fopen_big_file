.PHONY: all
all:
	$(CC) -m32 test_fopen_big_file.c -o test_fopen_big_file

.PHONY: clean
clean:
	rm -f test_fopen_big_file
