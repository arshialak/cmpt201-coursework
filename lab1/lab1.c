#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char *line = NULL;
  size_t len = 0;
  ssize_t nread;

  puts("Please enter some text: ");

  nread = getline(&line, &len, stdin);

  printf("%s is length %ld\n", line, strlen(line));

  free(line);
}
