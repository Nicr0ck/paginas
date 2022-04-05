#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int choice = atoi(argv[1]);
  int answer = rand() % 100;
//printf("%d\n", INT_MAX);
//printf("%d\n", answer );
//printf("%d %d %d %d\n"rand(),rand(),rand(),rand());
  printf("%s\n", choice == answer ? "ganaste" : "perdiste");
  return 0;
}
