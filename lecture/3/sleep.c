#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

int main() {

  fork();
  while (true) {
    printf("sleep\n");
    sleep(5);
  }

  return 0;
}
