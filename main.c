#include <stdio.h>
int main(){

  int n,count = 0;
  scanf("%d", &n);

  for ( int i = 1; i <= n; i++)
  {
    if (n % i ==0)
    {
      printf (" %d", i);
      count = count + 1;
    }
  }
  printf("\n %d", count);


  return 0;
}
