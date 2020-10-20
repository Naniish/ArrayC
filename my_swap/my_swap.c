#include <stdio.h>

/*
** ETNA PROJECT, 2020
** Frist C Programming
** File description:
** 		No file there, just an etna header example
*/

void my_swap(int *a, int *b){

  int prmt;
  prmt = *a;
  *a = *b;
  *b = prmt;

  printf("%d", a);
  printf("%d", b);
}
