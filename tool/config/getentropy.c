// tests for getrandom()
#include <sys/random.h>

int main(int argc, char *argv[]) {
  long x = 0;
  if (getentropy(&x, sizeof(x)) != sizeof(x)) return 1;
  if (!x) return 2;
  return 0;
}