/* 
 * File:   fila-imp.h
 * Author: msobral
 *
 * Created on 11 de Agosto de 2016, 13:59
 */

#ifndef FILA_IMP_H
#define	FILA_IMP_H

#include "fila.h"
#include "lista.h"
#include <string>

namespace prglib {

    template <typename T> fila<T>::fila(unsigned int cap) {
        N = 0;
        max = cap;
        inicio = 0;
        fim = 0;
        buffer = new T[max];
    }

    template <typename T> fila<T>::fila(const fila& orig) {

    }

    template <typename T> bool fila<T>::operator==(const fila& outra) const {

        fila<T> &aux;
        if (aux.N == outra.N) {
            if (aux.buffer == outra.buffer) {

            } else {
                return false;
            }
        } else {
            return false;
        }
    }

    template <typename T> fila<T>::~fila() {
        delete[] buffer;
    }

    template <typename T> fila<T>& fila<T>::operator=(const fila& outra) {
        N = outra.N;
        max = outra.max;
        inicio = outra.inicio;
        fim = outra.fim;
        delete[] buffer;
        buffer = new T[max];
        for (int i = 0; i < max; i++)buffer[i] = outra.buffer[i];
        return *this;
    }

    template <typename T> void fila<T>::enfileira(const T& algo) {
        if (N != max) {
            buffer[fim] = algo;
            N++;
            fim++;
            if (fim == max)fim = 0;
        } else {
            throw -1;
        }
    }

    template <typename T> T fila<T>::desenfileira() {
        if (vazia())throw "fila cheia!";
        T& dado = buffer[inicio];
        inicio++;
        N--;
        if (inicio == max) inicio = 0;

        return dado;
    }

    template <typename T> const T & fila<T>::frente() const {
    }

    template <typename T> bool fila<T>::vazia() const {
        return N == 0;
    }

    template <typename T> bool fila<T>::cheia() const {
        return N == max;
    }

    template <typename T> unsigned int fila<T>::capacidade() const {
        return max;
    }

    template <typename T> unsigned int fila<T>::comprimento() const {
        return N;
    }

} // fim namespace

#endif	/* FILA_IMP_H */

