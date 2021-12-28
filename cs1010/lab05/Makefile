.SILENT: test tidy memcheck
.PHONY: test tidy memcheck
SHELL := /bin/bash
FILES=max bug1 bug2 bug3 bug4 bug5 bug6
CC=clang
LDLIBS=-lm -lcs1010
CFLAGS=@compile_flags.txt 

all: $(FILES)

tidy:
	clang-tidy -quiet *.c 2> /dev/null

clean:
	rm $(FILES)
# vim:noexpandtab
