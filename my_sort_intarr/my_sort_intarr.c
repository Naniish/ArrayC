#include <stdio.h>

/*
** ETNA PROJECT, 2020
** Frist C Programming
** File description:
** 		No file there, just an etna header example
*/

void my_sort_intarr(int *array, int n){
  int a, b, c;
  for(a = 0; a < n; a++){

    for(b = a +1; b < n; b++){

      if(*(array + b) < *(array +a)){

	c = *(array + a);
	*(array + a) = *(array + b);
	*(array +b) = c;
      }
    }
  }
  for(a = 0; a < n; a++)
    printf("%d", *(array +a)); 
}
