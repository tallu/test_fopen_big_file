CFLAGS+=-D_FILE_OFFSET_BITS=64
.PHONY: all
all:
	$(CC) $(CFLAGS) test_fopen_big_file.c -o test_fopen_big_file

.PHONY: clean
clean:
	rm -f test_fopen_big_file
