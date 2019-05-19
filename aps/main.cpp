#include "iostream"
#include "banco.h"
#include "fatoracao.h"
#include "fibonacci.h"
#include "extenso.h"

using namespace std;

int main()
{
    int sair;
    bool flag = false;

    while(!flag)
    {
        int escolha;

        cout << "\nEscolha qual atividade da APS quer testar: \n" <<"\n1 -> Calcularar fatoracao\n2 -> Sequencia Fibonacci\n3 -> Banco C++\n4 -> Numero por extenso\n\nDigite um numero respectivo ao exercicio e aperte ENTER\n\n";
        cin >> escolha;

        cout << "\n=============================================";

        switch(escolha)
        {
          case 1:
            fatoracao();
            cout << "\n=============================================";
          break;

          case 2:
            fibonacci();
            cout << "\n=============================================";
          break;

          case 3:
            banco();
            cout << "\n=============================================";
          break;

          case 4:
            extenso();
            cout << "\n=============================================";
          break;


          default:
            cout<<"Atividade nao encontrada :(";
            break;
        }

        cout << "\n\nDeseja encerrar o script? (1 - Sim/2 - Nao)\n\n/*Nota.: Ao selecionar nao, voce volta ao menu inical*/\n";
        cin >> sair;

        switch(sair)
        {
          case 1:
            flag = true;
            cout << "\n\n\n\n\n -------CREDITOS----->\n\n\n\nDesenvolvido por.:\n\nWilliam Nunes - RA: 1501579\n"
                    "Luccas Souza - RA: 3291445\n"
                    "Mariana Ribeiro - RA: 3458456\n"
                    "Fábio Lima - RA: 3205177\n\n\n\n -------FINISH-------->\n\n\n";
            break;

          case 2:
            flag = false;
            break;

          default:
            cout <<"\nEscolhe direito cusao\n";
            exit(0);
            break;
        }


    }
}
