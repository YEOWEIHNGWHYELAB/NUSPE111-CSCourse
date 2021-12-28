/**
 * CS1010 Semester 1 AY20/21
 * Assignment 3: Max
 *
 * Read in a sequence of numbers and recursively find
 * the maximum.
 *
 * @file: max.c
 * @author: XXX (Group YYY)
 */
#include "cs1010.h"

void read_long_array(long n, long list[n]) {
  for (long i = 0; i < n; i += 1) {
    list[i] = cs1010_read_long();
  }
}

long max(const long list[], long start, long end)
{
  if (start + 1 == end) {
    return list[start];
  }
  long mid = (start + end)/2;

  long left = max(list, start, mid);
  long right = max(list, mid, end);
  if (left > right) {
    return left;
  }
  return right;
}

int main()
{
  long list[10000]; 
  long num_of_elems = cs1010_read_long();
  read_long_array(num_of_elems, list);
  cs1010_println_long(max(list, 0, num_of_elems));
}
