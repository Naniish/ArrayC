#include <stdio.h>
/*
** ETNA PROJECT, 2020
** Frist C Programming
** File description:
** 		No file there, just an etna header example
*/


void my_putstr(const char *str){
 
  int i=0;
  for(i=0; i<sizeof(str); i++){
    printf("%c\n", str[i]);
  }
}

