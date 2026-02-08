# C Data Toolkit

A lightweight C library of in-place array and string utilities, written to
practice low-level memory manipulation, pointer-based APIs, and control flow.

## Features
- In-place integer array filtering and compression
- Pointer-based statistics computation
- String normalization and word counting
- No dynamic memory allocation

## Motivation
This project was built to strengthen understanding of C pointers, arrays,
and memory behavior - concepts critical in systems programming.

## Build
gcc -Wall -Wextra -std=c11 main.c src/*.c -Iinclude -o toolkit

## Example
Input:
  {1,1,2,2,3}
Output:
  {1,2,3}
