
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//~~~~~~~~~~~~~~~~~~~MAIN ARVORE~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
/*#include <iostream>
#include <string>
#include <prglib.h>
 
using namespace std;
using prglib::arvore;
 
int main() {
  string w[7] = {"graviola","caju","sapoti","acai", "banana","morango","laranja"};
 
  // Uma árvore deve ser criada dinamicamente ... isso facilita
  // sua implementação.
  arvore<string> * arv = new arvore<string>(w[0]);
 
  for (int n=1; n < 6; n++) arv->adiciona(w[n]);
 
  for (int n=0; n < 7; n++) {
    try {
      cout << "arv[" << w[n] << "] = " << arv->obtem(w[n]) << endl;
    } catch (...) {
      cout << "Ops: " << w[n] << " não está na árvore !" << endl;
    }
  }
 
  delete arv;
 
  return 0;
}*/
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//~~~~~~~~~~~~~~~~~~~MAIN FILA~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
#include <string>
#include "prglib.h"
#include <iostream>

using namespace std;

using namespace prglib;

int main () {
    fila<long> f1(10);
        fila<long> f2(10);

    f1.enfileira(1);
    f1.enfileira(2);
    f1.enfileira(3);
    
    
   cout << "cap....." << f1.capacidade() <<endl; 
    

   // f2.comprimento();
 

   
}
 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//~~~~~~~~~~~~~~~~~~~MAIN PILHA~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
/*
#include <iostream>
#include <iostream>
#include <prglib.h>

const int CAPACIDADE = 6;

using namespace std;
using prglib::pilha;

int main() {
    pilha<int> q(CAPACIDADE);
    pilha<int> f(CAPACIDADE);

    q.push(5);
    q.push(8);
    q.push(4);
    q.push(2);
    q.push(3);
    cout << "comprimento da pilha é " << q.comprimento() << endl;
    cout << "Empilhou 5, 8, 4, 2, 3" << endl;


    f=q;

    while (!f.vazia()) {
        cout << "Topo da pilha=" << f.top();
        cout << "... desempilhou " << f.pop() << endl;
    }
    return 0;
}
*/
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//~~~~~~~~~~~~~~~~~~~MAIN LISTA~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
/*#include <iostream>
#include <string>
#include <prglib.h>
 
using prglib::lista;
using namespace std;
 
void mostraLista(lista<string> & l) {
  int len = l.comprimento();
  cout << "Comprimento: " << len << endl;
 
  int pos = 0;  
  while (pos < len) {
    string algo = l.remove(0);
    l.anexa(algo);
    cout << "Posicao " << pos;
    cout << ": " << algo << endl;    
    pos++;
  }
}
 
int main() {
  lista<int> l;
 
  l.anexa(0);
  l.anexa(3);
  l.anexa(2);
  l.anexa(4);
  l.anexa(1);
  l.anexa(5);
//   cout << endl;
  l.ordena();
  l.inverte();
  l.escrevaSe(cout);

  return 0;
}*/