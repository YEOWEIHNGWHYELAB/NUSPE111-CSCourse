#include "cs1010.h"

int main() {
  size_t n = cs1010_read_size_t();
  long *ar = cs1010_read_long_array(n);
  if (ar == NULL) {
    cs1010_println_string("memory allocation failed");
    return 1;
  }
  free(ar);
  for (size_t i = 0; i < n; i += 1) {
    cs1010_print_long(ar[i]);
  }
}
