#include <stdio.h>

int main() {
    int a = 0;
    for(; a < 10; a++)
    {
        int b = 0;
        
        for (; b < 10; b++)
        {
            putchar(a + 48);
            putchar(b % 10 + 48);
            if (a != 9 || b != 9)
            {
              putchar(',');
              putchar(' ');
            }
        }
    }
  putchar('\n');
  return 0;
}
