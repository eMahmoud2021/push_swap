# Push_swap
Push_swap is a program written in C that solves the sorting problem for two stacks named `a` and `b`. The goal is to sort the numbers in stack `a` in ascending order using a specific set of operations. The program aims to find the smallest list of instructions to achieve the desired sorted state. The subject of the project can be found in this [link](https://github.com/eMahmoud2021/push_swap/blob/main/fr.subject.pdf).

## Project rules

- The program is composed of 2 stacks named `a` and `b`.
  - the stack `a` contains a random amount of negative and/or positive numbers which cannot be duplicated.
  - `b` is empty.
- The goal is to sort in ascending order numbers into stack `a`.
- To do this you have the following operations at your disposal:

  - `sa`: swap a - swap the first 2 elements at the top of stack `a`. Do nothing if there is only one or no elements).
  - `sb`: swap b - swap the first 2 elements at the top of stack `b`. Do nothing if there is only one or no elements).
  - `ss`: sa and sb at the same time.
  - `pa`: push a - take the first element at the top of b and put it at the top of `a`. Do nothing if `b` is empty.
  - `pb`: push b - take the first element at the top of `a` and put it at the top of `b`. Do nothing if `a` is empty.
  - `ra`: rotate a - shift up all elements of stack `a` by 1. The first element becomes the last one.
  - `rb`: rotate b - shift up all elements of stack `b` by 1. The first element becomes the last one.
  - `rr`: ra and rb at the same time.
  - `rra`: reverse rotate a - shift down all elements of stack `a` by 1. The last element becomes the first one.
  - `rrb`: reverse rotate b - shift down all elements of stack `b` by 1. The last element becomes the first one.
  - `rrr`: rra and rrb at the same time.

## Usage

To use the push_swap program, navigate to the files/ directory and run the following command::

```shell
make
```

Execute the program by providing the stack `a` as command-line arguments:
```shell
./push_swap 2 1 3 6 5 8
```

The program will display the smallest list of instructions to sort the stack `a`, with the smallest number at the top.
