#include <stdio.h>
#include "draw.h"


/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int newleftCol = leftCol + size - (size/2);
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < newleftCol; col++) putchar(' ');
    for (       ; col < newleftCol + size;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

// Prints an arrow using both print_triangle and print_square
void print_arrow(int leftCol, int size)
{
  print_triangle(leftCol, size);
  print_square(leftCol, size);
}
