#include <stdio.h>

int main(void) {
  int height;
  printf("Enter the height of the pyramid");
  scanf("%d", &height);

  for(int i = 1; i <= height; i++){
      for(int j = 0; j < height - i; j++){
        printf(" ");
      }
      for(int j = 0; j < i; j++){
        printf("#");
      }
      printf("\n");
   }

  return 0;
}