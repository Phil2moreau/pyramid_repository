#include <stdio.h>

void pyramid(int i, int j, int rows){
    for(i=1; i<=rows; ++i)
    {
      for(j=1; j<=i; ++j)
      {
          printf("* ");
      }
      printf("\n");
    }
}

int main()
{
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);

    return 0;
}
