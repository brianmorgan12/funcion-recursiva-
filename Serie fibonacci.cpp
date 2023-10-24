#include <stdio.h>
#include <stdlib.h>

  unsigned long long int recursiva (int n) 
   {
   	
 if (n <= 1)
	 {
        return n;
     }
	  else 
	  {
        return recursiva (n - 1) + recursiva (n - 2);
      }
   }

int main() {
    int n, i;
    printf("Introducel el numero:");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) 
	{
        printf("%llu ", recursiva(i));
    }

    printf("\n");

    return 0;
}

