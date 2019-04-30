#include "fibonacci.h"
#include "string"
#include "iostream"

using namespace std;

fibonacci::fibonacci()
{
    int num, ant=1, at= 1, pr;

    cout << "\nDigite quantos termos quer da sequencia Fibonacci: ";

    cin >> num;

    for (int i=1; i<=num;i++)

    {

      if (i==1) cout << "\nSequencia:\n0 ";

      else if (i==2 || i == 3) cout << "1 ";

      else

      {

        pr= ant+at;

        ant= at;

        at= pr;

        cout << " " << pr;

      }

    }
}
