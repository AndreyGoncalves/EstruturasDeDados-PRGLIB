/* 
 * File:   arvore-impl.h
 * Author: sobral
 *
 * Created on 8 de Outubro de 2016, 19:37
 */

#ifndef ARVORE_IMPL_H
#define	ARVORE_IMPL_H

#include "arvore.h"


namespace prglib {

    template <typename T> arvore<T>::~arvore() {
    }

    template <typename T> arvore<T>::arvore() {
        esq = nullptr;
        dir = nullptr;
    }

    template <typename T> arvore<T>::arvore(const T & dado) {
        data = dado;
        esq = nullptr;
        dir = nullptr;
    }

    //template <typename T> arvore<T>::arvore(const arvore<T> & outra) : BasicTree(outra) {}

    template <typename T> void arvore<T>::adiciona(const T & algo) {
        if (data == algo)data = algo;
        if (algo < data) {
            if (esq) {
                esq->adiciona(algo);
            } else {
                esq = new arvore<T> (algo);
            }
        } else {
            if (dir)dir->adiciona(algo);
            else dir = new arvore<T> (algo);
        }
    }

    template <typename T> T& arvore<T>::obtem(const T & algo) {
        if (data == algo)return data;
        if (algo < data) {
            if (esq) {
               return esq->obtem(algo);
            } else {
                throw -1;
            }
        } else {
            if (dir)dir->obtem(algo);
            else throw -1;
        }
      
    }

    template <typename T> void arvore<T>::listeEmLargura(lista<T> & result) {
    }

    template <typename T> void arvore<T>::listeInOrder(lista<T> & result) {
    }

    template <typename T> void arvore<T>::listePreOrder(lista<T> & result) {
    }

    template <typename T> void arvore<T>::listePostOrder(lista<T> & result) {
    }

    template <typename T> unsigned int arvore<T>::tamanho() const {
    }

    template <typename T> int arvore<T>::fatorB() {
    }

    template <typename T> unsigned int arvore<T>::altura() {
    }

    template <typename T> arvore<T>* arvore<T>::balanceia() {
    }

    template <typename T> arvore<T>* arvore<T>::balanceia(bool otimo) {
    }

    template <typename T> void arvore<T>::inicia() {
    }

    template <typename T> T& arvore<T>::proximo() {
    }

    template <typename T> bool arvore<T>::fim() {
    }

    template <typename T> T& arvore<T>::obtemMenor() const {
    }

    template <typename T> T& arvore<T>::obtemMaior() const {
    }

    template <typename T> void arvore<T>::obtemMenoresQue(lista<T> & result, const T & algo) {
    }

    template <typename T> void arvore<T>::obtemMaioresQue(lista<T> & result, const T & algo) {
    }

};

#endif	/* ARVORE_IMPL_H */

