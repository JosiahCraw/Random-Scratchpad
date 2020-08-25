# Paper Scissors Rock

This is just a proof of concept trying to make a COSC121 Super-quiz
optimised solution. The question was simply to determine the winner
of a game of Paper Scissors Rock given the two moves. This code is 
written in C.

## Theory
Uses a lookup table to have constant time vs `if`/`else` statements.
original version used a 3x3 array, this version uses 3 chars to reduce
memory use. These chars are defined by the game outcomes.

## Usage
Makefile will build and run the code.

```console
user@linux:~$ make
```

To run the independently use:
```console
user@linux:~$ ./main paper scissors
```
