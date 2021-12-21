#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>   

#ifndef GET_TOKEN_H_INCLUDE
#define GET_TOKEN_H_INCLUDE

typedef enum{FDT,SEP, CAD}Token; // Tokens que reconoce 

typedef  enum{LETRA,DIGITO,NUMERAL,FDT,ESPACIO,OTRO} CARACTER;  


//declaracion de las funciones a utilizar
Token get_token(void);
Token token;



#endif