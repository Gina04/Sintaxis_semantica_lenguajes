
#include <stdlib.h>
#include "scanner.h"


int main(){

    do{
        token = get_token(); 
 
        switch(token){
            case SEP:
            printf("Separador: %s\n", SEP); 
            break;
            case CAD:
            printf("Cadena: %s\n", CAD);
            break;
            case FDT:
            printf("Fin de Texto: ");
            break;
            default: printf("El token no fue identificado");

        }

    }while (token!=FDT);

    return EXIT_SUCCESS;
    
}