#include "fatoracao.h"
#include "string"
#include "iostream"
#include "stdio.h"

using namespace std;

fatoracao::fatoracao()
{
    int n=0, resultado=0;
      string equacao;

      cout << "\nScript Calculo de fatorial\n\nDigite um numero e iremos lhe mostrar o resultado dele fatorado:\n";
      cin >> n;

      for(int i=1;i<n;i++){

        equacao += to_string(i) + "*" ;
        resultado += i*n;

      }

      cout << "\n" << n << "! eh: "<< resultado;
      cout << "\n\nEquacao: " << equacao << to_string(n);
}
