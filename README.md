# push_swap
The purpose of this project is sorting data on a stack, with a limited set of instructions, using the lowest possible number of actions.
## Make rules
`make` to compile mandatory part.
`make clean` to clean all object files.
`make fclean` to remove executable files.
`make re` to recompile this project.
## Usage
You can enter a random number of positive or negative numbers without any duplicates.
```
$ ./push_swap a set of numbers to sort without " "
```
At the output, you will get a set of commands with which the stack was sorted. Below are the descriptions of the commands

- `sa` swap a - swap the first 2 elements at the top of stack a. <br>
- `sb` swap b - swap the first 2 elements at the top of stack b. <br>
- `ss` sa and sb at the same time. <br>
- `pa` push a - take the first element at the top of b and put it at the top of a. <br>
- `pb` push b - take the first element at the top of a and put it at the top of b. <br>
- `ra` rotate a - shift up all elements of stack a by 1. The first element becomes the last one. <br>
- `rb` rotate b - shift up all elements of stack b by 1. The first element becomes the last one. <br>
- `rr` ra and rb at the same time. <br>
- `rra` reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one. <br>
- `rrb` reverse rotate b - shift down all elements of stack a by 1. The last element becomes the first one. <br>
- `rrr` rra and rrb at the same time. <br>
If you want to see a set of sorted numbers, then first in the push_swap.h file add the stdio.h library to use printf function

