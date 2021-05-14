# Monty

<img src="./img/monty_burns_cup.png" width='400'>

Monty 0.98 is a scripting language interpreter

## Learning Objectives

### General
- What do LIFO and FIFO mean
- What is a stack, and when to use it
- What is a queue, and when to use it
- What are the common implementations of stacks and queues
- What are the most common use cases of stacks and queues
- What is the proper way to use global variables

## Files

File|description
--|--
main.c | Entrypoint
monty.h| Header with all the libraries, prototypes and structs
built_in.c | First part of built-in functions
built_in_2.c  | Second part of built-in functions
calculations.c | Third part of built-in funcitons (only calculations)
execute.c | Function to prepare the parameters of built-in functions
find_built.c | Function to find and select the built-in or discard wrong parameters
free_stack.c | Function to free memory from mallocs
print_error.c | Function to print an error message on std_error
tools.c | Different tool functions for the main functions


# Errors
- 0:  USAGE: monty file
- 1: Error: Can't open <file>
- 2: L<line_number>: unknown instruction <opcode>
- 3: L<line_number>: can't <func> an empty stack
- 4: L<line_number>: can't <func>, stack too short
- 5: Error: malloc failed
- 6: L<line_number>: usage: push integer


# Autor
:computer: :coffee: :computer:  :coffee:
- [@aike-s](https://github.com/aike-s) :woman:
- [@williamzborja](https://github.com/williamzborja) :smile:
