#include <stdio.h>
#include <stdlib.h>

int setup() {
  int i;
  float f;
  char s[80];

  if (scanf("%d %f %s", &i, &f, s) != 3) {
    return -1;
  }

  FILE *fp = fopen("test.txt", "w");
  

  if (fp == NULL) {
   printf("Cannot open file.\n");
    return -2;
  }


  fprintf(fp, "%d %f\n%s\n", i, f, s);

  fclose(fp);
  return 0;
}

int main() {

  if (setup() != 0) {
    printf("Unable to setup.\n");
    exit(1);
  }
  FILE *fp = fopen("test.txt", "r");

  if (fp == NULL) {
   printf("Cannot open file.\n");
    exit(2);
  }

  int i;
  float f;
  char s[80];

if (fscanf(fp, "%d %f\n%s\n", &i, &f, s) != 3) {
  printf("Invalid data in file.\n");
  exit(3);
}
if (f == 0) {
  printf("%d %d\n%s\n", i, 0, s);
} else {
  printf("%d %.2f\n%s\n", i, f, s);
}

  fclose(fp);
  return 0;
}
