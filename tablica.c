#include "stdio.h"
#define SIZE 4
int main(int argc, char const *argv[]) {
  int zmienne[SIZE][SIZE]= {{1,2,3,4},{10,20,30,40},{100,200,300,400},{1000,2000,3000,4000}};
  for (int i = 0; i <SIZE; i++) {
    printf("podaj wartość dla rzędu %d\n", i);
    for (int j=0;  j<SIZE; j++) {
        printf("Podaj wartość komórki %d: ", j);
        scanf("%d", &zmienne[i][j] );
      }
    }
printf("\nWartości tablicy to:\n");
for (int i=0; i<SIZE; i++)
{
 for (int j=0;  j<SIZE; j++)
 {
   printf("%5d ", zmienne[i][j]);
  }
  printf("\n");

  }
return 0;
}
