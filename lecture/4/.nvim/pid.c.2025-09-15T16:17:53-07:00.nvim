#include <stdio.h>
#include <unistd.h>

int main() {
  int pid = getpid();
  int parentPID = getppid();

  printf("start: %d\n", pid);
  printf("parent: %d\n", parentPID);

  fork();

  pid = getpid();
  parentPID = getppid();

  if (pid == getpid()) {
    printf("child: %d, parent: %d\n", pid, parentPID);
  } else {
    printf("parent: %d, child %d\n", parentPID, pid);
  }

  return 0;
}
