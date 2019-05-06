#include "extenso.h"
#include "string"
#include "stdio.h"
#include "iostream"
#include "string.h"
#include "cstring"
#include "algorithm"
#include "vector"

using namespace std;


extenso::extenso()
{
    const char * const ExUnidade[] = {
        "ZERO",
        "UM",
        "DOIS",
        "TRES",
        "QUATRO",
        "CINCO",
        "SEIS",
        "SETE",
        "OITO",
        "NOVE"
    };

    const char * const ExDezena_[] = {
        "DEZ",
        "ONZE",
        "DOZE",
        "TREZE",
        "QUATORZE",
        "QUINZE",
        "DEZESSEIS",
        "DEZESSETE",
        "DEZOITO",
        "DEZENOVE"
    };

    const char * const ExDezena[] = {
        "NULL",
        "NULL",
        "VINTE",
        "TRINTA",
        "QUARENTA",
        "CINQUENTA",
        "SESSENTA",
        "SETENTA",
        "OITENTA",
        "NOVENTA"
    };

    const char * const ExCentena[] = {
        "NULL",
        "CENTO",
        "DUZENTOS",
        "TREZENTOS",
        "QUATROCENTOS",
        "QUINHENTOS",
        "SEISCENTOS",
        "SETECENTES",
        "OITOCENTOS",
        "NOVECENTOS"
    };

    int numero = 0;
    int input = 0;
    int U, D, C, M = 0;
    cout << "\nAlgoritmo de conversao de inteiros para extensos.\n\nDigite o valor do numero:\n";
    cin >> input;

    numero = input;

    int casasNumero [sizeof(numero)];

    *casasNumero = 0;

    int contador = 0;

    while(numero>0)
    {
     casasNumero[contador] = numero%10;
     numero=numero/10;
     contador++;
    }

    U = casasNumero[0];
    D = casasNumero[1];
    C = casasNumero[2];
    M = casasNumero[3];

    if (input <= 9) {
        cout << "\n" << ExUnidade[U];
    }
    else
    if ((input > 9) && (input <= 19)){
        cout << "\n" << ExDezena_[U];
    }
    else if (input <= 99)
    {
        if (U == 0) {
            cout << "\n" <<ExDezena[D];
        } else {
           cout << "\n" << ExDezena[D] << " E " << ExUnidade[U];
        }
    }
    else if ((input > 99) && (input <= 999))
    {
        if ((D == 0) && (U == 0)) {
            if (C == 1) {
                cout << "\nCEM";
            } else {
            cout << "\n" <<ExCentena[C];
            }
        } else if (D == 1){
           cout << "\n" << ExCentena[C] << " E " << ExDezena_[U];
        } else if ((D == 0) && (U > 0)){
            cout << "\n" << ExCentena[C] << " E " << ExUnidade[U];
        } else if ((D > 1) && (U == 0)){
            cout << "\n" << ExCentena[C] << " E " << ExDezena[D];
        } else {
            cout << "\n" << ExCentena[C] << " E " << ExDezena[D] << " E " << ExUnidade[U];
        }
    }


}
