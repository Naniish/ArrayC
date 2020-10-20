#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
** ETNA PROJECT, 2020
** Frist C Programming
** File description:
** 		No file there, just an etna header example
*/

int my_getnbr(const char *str){

  int resultat;
  for(int i = 0; i < strlen(str); i++)
    resultat = resultat * 10 + str[i] - '0';
  return resultat;
}
