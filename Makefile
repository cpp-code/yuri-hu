all: variable_arguments

variable_arguments: variable_arguments.o
	gcc -o $@ $^ -Wall -Werror

check: variable_arguments
	./$<

distcheck:
	@echo

clean:
	@rm -vf *.o variable_arguments

distclean:
	@echo
