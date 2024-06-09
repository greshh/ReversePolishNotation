# Reverse Polish Notation
***Start:** March 3<sup>rd</sup> 2023, **Finish:** March 24<sup>th</sup> 2023*

An assignment for a second-year course: Algorithms & Data Structures.

## Scenario
This program evaluates a single Reverse Polish Notation (RPN) expression. Numbers appearing in the expression are all integers, and permitted operators are `+`, `-`, `*`, and `/` (integer division). The expression is read from standard input, and the result is printed to standard output. When the input is not a valid RPN expression (eg. mismatch of numbers and operators, division by zero), it prints `INVALID` instead.

## Example inputs:
Representing "2 + 4" in in-fix notation using RPN:
```
2 4 +
6
```

With mismatch of numbers and operators (represents "+ 5 + 3" in in-fix, which isn't a valid expression):
```
5 3 + +
INVALID
```

## What I learnt:
- Pre-fix, post-fix and in-fix notations and how to convert one to another.
- Implementing stacks to store operands and, therefore, solve RPN expressions and error checking.
