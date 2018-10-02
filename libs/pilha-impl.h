#ifndef PILHA_IMPL_H
#define	PILHA_IMPL_H

#include "pilha.h"


namespace prglib {

    template <typename T> pilha<T>::pilha(unsigned int umaCapacidade) {
        topo_pilha = 0;
        max = umaCapacidade;
        buffer = new T [max];
    }

    template <typename T> pilha<T>::pilha(const pilha& outra) {
    }

    template <typename T> pilha<T>::~pilha() {
        delete [] buffer;
    }

    template <typename T> pilha<T> & pilha<T>::operator=(const pilha<T> & outra) {
        max = outra.max;
        topo_pilha = outra.topo_pilha;
        delete[] buffer;
        buffer = new T [max];
        for (int i = 0; i < topo_pilha; i++)buffer[i] = outra.buffer[i];
    }

    template <typename T> void pilha<T>::esvazia() {
        buffer == 0;
    }

    template <typename T> void pilha<T>::push(const T & dado) {
        if (cheia())throw -1;
        buffer[topo_pilha] = dado;
        topo_pilha++;

    }

    template <typename T> T pilha<T>::pop() {
        if (vazia()) throw -1;
        topo_pilha--;
        T dado = buffer[topo_pilha];
        return dado;
    }

    template <typename T> const T& pilha<T>::top() const {
        return buffer[topo_pilha - 1];

    }

    template <typename T> unsigned int pilha<T>::capacidade() const {
        return max;
    }

    template <typename T> bool pilha<T>::cheia() const {
        return max == topo_pilha;
    }

    template <typename T> bool pilha<T>::vazia() const {
        return topo_pilha == 0;
    }

    template <typename T> unsigned int pilha<T>::comprimento() const {
        return topo_pilha;
    }


}

#endif	/* PILHA_IMPL_H */

