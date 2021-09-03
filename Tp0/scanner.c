 #include <ctype.h>
 #include <stdio.h>
 #include "scanner.h"



 Token get_token(){
    char c = getchar();

    while(isspace(c)){
        switch (c)
        {
        case 1:
            ungetc(c,stdin);
            return SEP;
        case 2:
            ungetc(c,stdin);
            return SEP;
        case 3:
            ungetc(c, stdin); 
            return CAD;    
        }
        return 0;
       
    }
  
 }


 