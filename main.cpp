#include "src/utils.cpp"

#include <string.h>
#include <iostream>

int main(){
     std::string clave, texto, textoCifrado;
     int longitudClave, longitudTexto;

     std::cout << "Ingrese clave de cifrado: ";
     std::cin >> clave;
     longitudClave = clave.length();

     std::cout << "Ingrese texto a cifrar:" << std::endl;
     std::getline(std::cin >> std::ws, texto);
     longitudTexto = texto.length();

     int j = 0;
     for(int i = 0; i < longitudTexto; i++){
          textoCifrado.at(i) = letraEn(letraPos((texto.at(i)) + clave.at(j)) % 28);
          if( j == longitudClave )
               j = 0;
          else
               j++;
     }

     for(int i = 0; i < longitudTexto; i++){
          std::cout << textoCifrado.at(i) << " ";
     }

     return 0;
}