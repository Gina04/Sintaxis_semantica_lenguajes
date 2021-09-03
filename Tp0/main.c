
#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"

int main(){
    Token token;
    
    /*Guardo un token en la variable 'token' que es devuelto por la funcion*/
    do{
        token = get_token(); 
 
        switch(token){
            case SEP:
            printf("Separador:"); 
            break;
            case CAD:
            printf("Cadena:");
            break; 
            case FDT:
            printf(" ");
            break;
            default: printf("El token no fue identificado");

        }

    }while (token= getchar()!=EOF);

    
    
    
}