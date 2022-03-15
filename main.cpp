#include <stdio.h>
#include <iostream>
#include <string>
#include "funcao.hpp"

using namespace std;

int main()
{
int x;
int y;

cout << "digite valor de x:" ;
cin >> x;
cout << "digite o valor de y:";
cin >> y;

  cout << "A soma é:" << somaValor(x,y);
    return 0;
}
