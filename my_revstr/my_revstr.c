#include <stdio.h>
#include <string.h>

/*
** ETNA PROJECT, 2020
** Frist C Programming
** File description:
** 		No file there, just an etna header example
*/

void my_revstr(char *str){
  //char chaine[]="coucouencoremoi";
  char *debut, *fin, chaine;
  int i;
  int l = strlen(str);
  debut = str;
  fin = str;
  for(i = 0; i < l -1; i++)
    fin++;
  
  for(i = 0; i < l /2; i++){

    chaine = *fin;
    *fin = *debut;
    *debut = chaine;

    debut++;
    fin--;
  }
}
