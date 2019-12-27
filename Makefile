CFLAGS = -Wall -Werror

all: regular_expression variable_arguments dt

variable_arguments: variable_arguments.o
	gcc -o $@ $^ ${CFLAGS}

regular_expression: regular_expression.o
	g++ -o $@ $^ ${CFLAGS}

dt: date_time.o
	g++ -o $@ $^ ${CFLAGS}

check:
	@echo

distcheck:
	@echo

clean:

	@rm -vf *.o variable_arguments regular_expression dt

distclean:
	@echo
