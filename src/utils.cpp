int letraPos(char caracter){
     if( caracter == 'a' )
          return 0;
     else if(caracter == 'b')
          return 1;
     else if(caracter == 'c')
          return 2;
     else if(caracter == 'd')
          return 3;
     else if(caracter == 'e')
          return 4;
     else if(caracter == 'f')
          return 5;
     else if(caracter == 'g')
          return 6;
     else if(caracter == 'h')
          return 7;
     else if(caracter == 'i')
          return 8;
     return 27;
}

char letraEn(int posicion){
     char letra;
     switch (posicion)
     {
     case 0:
          letra = 'a';
          break;
     
     default:
          letra = ' ';
          break;
     }
     return letra;
}