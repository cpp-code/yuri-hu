all: variable_arguments

variable_arguments: variable_arguments.o
	gcc -o $@ $^ -Wall -Werror

check: variable_arguments
	./$<

all: regular_expression

regular_expression: regular_expression.o
	g++ -o $@ $^ -Wall -Werror

check: regular_expression
	@echo Done

distcheck:
	@echo

clean:

	@rm -vf *.o variable_arguments

	@rm -vf *.o regular_expression

distclean:
	@echo