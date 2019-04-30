#include "iostream"
#include "banco.h"
#include "fatoracao.h"
#include "fibonacci.h"

using namespace std;

int main()
{
    int sair;
    bool flag = false;

    while(!flag)
    {
        int escolha;

        cout << "\nEscolha qual atividade da APS quer testar: \n" <<"\n1 -> Calcularar fatoracao\n2 -> Sequencia Fibonacci\n3 -> Banco C++\n4 -> Numero por extenso\n\n";
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


          default:
            cout<<"Atividade nao encontrada :(";
            break;
        }

        cout << "\n\nDeseja encerrar o script? (1 - Sim/2 - Nao)\n";
        cin >> sair;

        switch(sair)
        {
          case 1:
            flag = true;
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
