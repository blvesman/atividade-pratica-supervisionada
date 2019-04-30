#include "banco.h"
#include "string"
#include "iostream"
#include "stdio.h"
#include "string.h"
#include "strings.h"

using namespace std;

void mostrarAllDados(string celular,string email,string nome, double deposito, double saque, int idade){
    cout << "\nDados: " << nome << ", " << idade << " anos.";
    cout << "\nEmail: " << email;
    cout << "\nContato: " << celular;
    cout << "\nValor do ultimo depósito: " << deposito;
    cout << "\nValor do ultimo saque: " << saque;

}

banco::banco()
{
    bool flag;
    int saida;
    int escolha, idade;
    double saldo=0, saque=0, deposito=0;
    string celular, email, nome;
    cout << "\nSeja bem-vindo ao Banco C++\n";

    while(!flag)
    {
      cout << "\nO que gostaria de fazer?\n\n1 - Cadastro\n2 - Saque\n3 - Saldo\n4 - Deposito\n5 - Informacoes sobre o usuario.\n\n";
      cin >> escolha;

      switch(escolha)
      {
        //Cadastro
        case 1:

            if (nome == "")
            {
              cout << "\nBem-vindo convidado.\nEh um prazer ter sua visita em nosso Banco.\nVamos fazer seu cadastro okay?\nSo preciso de algumas informacoeszinhas. :D";


              cout << "\n\nDigite o seu primeiro nome:\n";
              cin >> nome;


              cout << "\nDigite a sua idade:\n";
              cin >> idade;

              if (idade < 18)
              {
                cout << "\nWait... this is illegal..";
                cout << "\nSystem crashed 404";
                exit(0);
              }
              else
              {
                cout << "\nDigite o seu endereco email:\n";
                cin >> email;

                cout << "\nDigite o numero do seu celular:\n";
                cin >> celular;
              }

            cout << "\nCadastro concluido com sucesso :D";
            cout << "\nSeja bem-vindo " << nome << ".";

            mostrarAllDados(celular, email, nome, deposito, saque, idade);
            }
            else
            {
              int escolhaEdit;

              cout << "\nVoce ja esta cadastrado, " << nome << ".";
              cout << "\nGostaria de alterar seus dados?(1 - Sim / 2 - Nao)\n";
              cin >> escolhaEdit;

              if (escolhaEdit == 1)
              {

                cout << "\nDigite a sua nova idade:\n";
                cin >> idade;

                cout << "\nDigite o seu novo endereco email:\n";
                cin >> email;

                cout << "\nDigite o seu novo numero do seu celular:\n";
                cin >> celular;

                mostrarAllDados(celular, email, nome, deposito, saque, idade);
              }
              else
              {
                cout << "\nOkay.";
              }
            }

          break;

        //Saque
        case 2:

          if (nome != "") {
            if (saldo == 0)
            {
              cout << "\nVoce nao tem saldo na sua conta D:\n";
            }
            else
            {
              cout << "\nSaldo de: " << saldo << "R$ \nquanto deseja sacar?";
              cin >> saque;

              if (saque > saldo)
              {
                cout << "\n\nImpossivel sacar esse valor.\n";
              }
              else
              {
                cout << "\nTotal sacado: " << saque << "R$";
                saldo -= saque;
                cout << "\nSaldo atual: " << saldo << "R$";
              }
            }
          } else {
            cout << "Usuario nao cadastrado";
          }

          break;

        //Checagem de saldo
        case 3:
          if (nome != ""){
            cout << "\nSeu saldo eh: " << saldo << "R$";
            if (saldo == 0) {
              cout << "\nFaca um deposito :D";
            }
          } else {
            cout << "Usuario nao cadastrado";
          }
          break;

        //Depósito
        case 4:
          if (nome != "") {
            cout << "\nDigite o valor que queira depositar: \n";
            cin >> deposito;

            saldo = saldo + deposito;

            cout << "\nFoi depositado: " << deposito << "R$\nSaldo atual: " << saldo << "R$";
          } else {
            cout << "Usuario nao cadastrado";
          }

          break;

        //Consultar informacoes
        case 5:
          if (nome != "") {
            mostrarAllDados(celular, email, nome, deposito, saque, idade);
          } else {
            cout << "\nUsuario nao cadastrado";
          }
          break;
      }

      cout << "\n\nDeseja sair do Banco C++? O banco sempre com voce.(1 - Sim/2 - Nao)\n";
      cin >> saida;

      switch(saida){
        case 1:
          flag = true;
          break;

        case 2:
          flag = false;
          break;

        default:
          cout << "\n\nDigite as opcoes certas arrombado <3\n";
          break;
      }

    }


}
