#include "main.h"

/**
 * reverse_array - reverse array
 * @a: array
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
  int aux;
  int i;
  int j = n - 1;
  
  for (i = 0; i < n / 2; i++, j--)
    {
      aux = a[i];
      a[i] = a[j];
      a[j] = aux;
    }
}
