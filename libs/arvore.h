/* 
 * File:   arvore.h
 * Author: msobral
 *
 * Created on 12 de Agosto de 2016, 13:12
 */

#ifndef ARVORE_H
#define	ARVORE_H

namespace prglib {
    
template <typename T> class arvore {
 public:
  arvore();
  //arvore(const arvore<T> & outra);
  arvore(const T & dado);
  virtual ~arvore();

  void adiciona(const T& algo);
  T& obtem(const T & algo);
  void listeInOrder(lista<T> & result);
  void listePreOrder(lista<T> & result);
  void listePostOrder(lista<T> & result);
  void listeEmLargura(lista<T> & result);
  unsigned int tamanho() const;  
  unsigned int altura() ;
  int fatorB() ;
  arvore<T> * balanceia();
  arvore<T> * balanceia(bool otimo);
  
  void inicia();
  bool fim();
  T& proximo();
  
  T remove(const T & algo);
  T & obtemMenor() const;
  T & obtemMaior() const;
  
  void obtemMenoresQue(lista<T> & result, const T & algo);
  void obtemMaioresQue(lista<T> & result, const T & algo);
 protected:
     T data;
     arvore<T> * esq, * dir;    
     
    arvore<T> * rotacionaL();     
    arvore<T> * rotacionaR();     
};

} // fim do namespace

#include <libs/arvore-impl.h>

#endif	/* ARVORE_H */

